#pragma once
static const double PI = 3.1415926535897932384626433832795;
extern "C" {
	class WaveOpticsCpp
	{
	public:
		__declspec(dllexport) static void __cdecl Prop1D(const double _lambda, const int _dir,
			const int _n1, const double* _x1, const double* _y1, const double* _u1re, const double* _u1im,
			const int _n2, const double* _x2, const double* _y2, double* _u2re, double* _u2im);

		__declspec(dllexport) static void __cdecl Prop2D(const double _lambda, const int _dir,
			const int _n1, const double* _x1, const double* _y1, const double* _z1, const double* _u1re, const double* _u1im,
			const int _n2, const  double* _x2, const double* _y2, const double* _z2, double* _u2re, double* _u2im);

	};
}