// WaveOpticsCpp_Wrapper.h

#pragma once

using namespace System;

namespace ClsNac {

	public ref class WaveOpticsCpp_Wrapper
	{
		// TODO: このクラスの、ユーザーのメソッドをここに追加してください。

	public:
		/// <summary>
		/// Fresnel-Kirchhoff 1D
		/// </summary>
		/// <param name="_lambda">Wavelength</param>
		/// <param name="_dir">Direction Forward:-1 Backward:1</param>
		/// <param name="_n1"></param>
		/// <param name="_x1"></param>
		/// <param name="_y1"></param>
		/// <param name="_u1re">Real part 1</param>
		/// <param name="_u1im">Imaginary part 1</param>
		/// <param name="_n2"></param>
		/// <param name="_x2"></param>
		/// <param name="_y2"></param>
		/// <param name="_u2re">Real part 2</param>
		/// <param name="_u2im">Imaginary part 2</param>
		static void Prop1D(double _lambda, int _dir,
			int _n1, array<double>^ _x1, array<double>^ _y1, array<double>^ _u1re, array<double>^_u1im,
			int _n2, array<double>^ _x2, array<double>^ _y2, array<double>^ _u2re, array<double>^_u2im);

		/// <summary>
		/// Fresnel-Kichhoff 2D
		/// </summary>
		/// <param name="_lambda">Wavelength</param>
		/// <param name="_dir">Direction Forward:-1 Backward:1</param>
		/// <param name="_n1"></param>
		/// <param name="_x1"></param>
		/// <param name="_y1"></param>
		/// <param name="_z1"></param>
		/// <param name="_u1re">Real part 1</param>
		/// <param name="_u1im">Imaginary part 1</param>
		/// <param name="_n2"></param>
		/// <param name="_x2"></param>
		/// <param name="_y2"></param>
		/// <param name="_z2"></param>
		/// <param name="_u2re">Real part 2</param>
		/// <param name="_u2im">Imaginary part 2</param>
		static void Prop2D(double _lambda, int _dir,
			int _n1, array<double>^_x1, array<double>^_y1, array<double>^_z1, array<double>^_u1re, array<double>^_u1im,
			int _n2, array<double>^_x2, array<double>^_y2, array<double>^_z2, array<double>^_u2re, array<double>^_u2im);
	};
}
