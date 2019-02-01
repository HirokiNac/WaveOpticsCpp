#pragma once
static const double PI = 3.1415926535897932384626433832795;
extern "C" {
	class WaveOpticsCpp
	{
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
		__declspec(dllexport) static void __cdecl Prop1D(const double _lambda, const int _dir,
			const int _n1, const double* _x1, const double* _y1, const double* _u1re, const double* _u1im,
			const int _n2, const double* _x2, const double* _y2, double* _u2re, double* _u2im);


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
		__declspec(dllexport) static void __cdecl Prop2D(const double _lambda, const int _dir,
			const int _n1, const double* _x1, const double* _y1, const double* _z1, const double* _u1re, const double* _u1im,
			const int _n2, const  double* _x2, const double* _y2, const double* _z2, double* _u2re, double* _u2im);

		/// <summary>
		/// Fresnel-Kichhoff 2D
		/// </summary>
		/// <param name="_lambda">Wavelength</param>
		/// <param name="_dir">Direction Forward:-1 Backward:1</param>
		/// <param name="_m1"></param>
		/// <param name="_n1"></param>
		/// <param name="_x1"></param>
		/// <param name="_y1"></param>
		/// <param name="_z1"></param>
		/// <param name="_u1re">Real part 1</param>
		/// <param name="_u1im">Imaginary part 1</param>
		/// <param name="_m2"></param>
		/// <param name="_n2"></param>
		/// <param name="_x2"></param>
		/// <param name="_y2"></param>
		/// <param name="_z2"></param>
		/// <param name="_u2re">Real part 2</param>
		/// <param name="_u2im">Imaginary part 2</param>
		__declspec(dllexport) static void __cdecl Prop2D(const double _lambda, const int _dir,
			const int _m1, const int _n1, const double* _x1, const double* _y1, const double* _z1, const double* _u1re, const double* _u1im,
			const int _m2, const int _n2, const  double* _x2, const double* _y2, const double* _z2, double* _u2re, double* _u2im);

		static double Area(
			const double _x1, const double _y1, const double _z1,
			const double _x2, const double _y2, const double _z2);
	};
}