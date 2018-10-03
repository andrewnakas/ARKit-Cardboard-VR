using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.InteropServices;


namespace UnityEngine.XR.iOS
{
	public class ARPointCloud 
	{
		IntPtr m_Ptr;

		internal IntPtr nativePtr { get { return m_Ptr; } }

		public int Count
		{
			get { return pointCloud_GetCount(m_Ptr); }
		}

		public Vector3[] Points 
		{
			get { return GetPoints(); }
		}

		internal static ARPointCloud FromPtr(IntPtr ptr)
		{
			if (ptr == IntPtr.Zero)
				return null;

			return new ARPointCloud(ptr);
		}

		internal ARPointCloud(IntPtr ptr)
		{
			if (ptr == IntPtr.Zero)
				throw new ArgumentException("ptr may not be IntPtr.Zero");

			m_Ptr = ptr;
		}
#if !UNITY_EDITOR && UNITY_IOS
		[DllImport("__Internal")]
		static extern int pointCloud_GetCount(IntPtr ptr);

		[DllImport("__Internal")]
		static extern IntPtr pointCloud_GetPointsPtr(IntPtr ptr);

#else
		static int pointCloud_GetCount(IntPtr ptr) { return 0; }
		static IntPtr pointCloud_GetPointsPtr(IntPtr ptr) { return IntPtr.Zero; }
#endif

		Vector3[] GetPoints()
		{
			IntPtr pointsPtr = pointCloud_GetPointsPtr (m_Ptr);
			int pointCount = Count;
			if (pointCount <= 0 || pointsPtr == IntPtr.Zero) 
			{
				return null;
			}
			else 
			{
				// Load the results into a managed array.
				var floatCount = pointCount * 4;
				float [] resultVertices = new float[floatCount];
				Marshal.Copy(pointsPtr, resultVertices, 0, floatCount);

				Vector3[] verts = new Vector3[pointCount];

				for (int count = 0; count < pointCount; count++)
				{
					//convert to Unity coords system
					verts[count].x = resultVertices[count * 4];
					verts[count].y = resultVertices[count * 4 + 1];
					verts[count].z = -resultVertices[count * 4 + 2];
				}

				return verts;
			}
		}

	}
}