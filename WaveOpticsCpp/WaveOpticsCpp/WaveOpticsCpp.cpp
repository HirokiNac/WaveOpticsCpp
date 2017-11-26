// WaveOpticsCpp.cpp : DLL アプリケーション用にエクスポートされる関数を定義します。
//

#include "stdafx.h"
#include "WaveOpticsCpp.h"
#include <math.h>

void WaveOpticsCpp::Prop1D(const double _lambda, const int _dir,
	const int _n1, const double* _x1, const double* _y1, const double* _u1re, const double* _u1im,
	const int _n2, const double* _x2, const double* _y2, double* _u2re, double* _u2im)
{
	double k = 2.0*PI / _lambda;

	double r, rx, ry, rr;
	double tr, ti;
	double tur, tui;
	double ur = 0.0, ui = 0.0;

#pragma omp parallel for schedule(static)
	for (int i = 0; i < _n2; i++)
	{
		for (int j = 0; j < _n1; j++)
		{
			rx = _x2[i] - _x1[j];
			ry = _y2[i] - _y1[j];
			r = sqrt(rx*rx + ry*ry);

			rr = 1.0 / sqrt(r);
			tr = cos(-k*r) * rr;
			ti = _dir* sin(-k*r) * rr;

			tur = _u1re[j];
			tui = _u1im[j];

			ur = ur + tur*tr - tui*ti;
			ui = ui + tur*ti + tui*tr;
		}
		_u2re[i] = ur;
		_u2im[i] = ui;
	}
}

void WaveOpticsCpp::Prop2D(const double _lambda, const int _dir,
	const int _n1, const double* _x1, const double* _y1, const double* _z1, const double* _u1re, const double* _u1im,
	const int _n2, const  double* _x2, const double* _y2, const double* _z2, double* _u2re, double* _u2im)
{
	double k = 2.0*PI / _lambda;


#pragma omp parallel for schedule(static)
	for (int i = 0; i < _n2; i++)
	{

		double r, rx, ry, rz, rr;
		double tr, ti;
		double tur, tui;
		double ur = 0.0, ui = 0.0;

		for (int j = 0; j < _n1; j++)
		{
			rx = _x2[i] - _x1[j];
			ry = _y2[i] - _y1[j];
			rz = _z2[i] - _z1[j];
			r = sqrt(rx*rx + ry*ry + rz*rz);

			rr = 1.0 / sqrt(r);
			tr = cos(-k*r) * rr;
			ti = _dir* sin(-k*r) * rr;

			tur = _u1re[j];
			tui = _u1im[j];

			ur = ur + tur*tr - tui*ti;
			ui = ui + tur*ti + tui*tr;
		}
		_u2re[i] = ur;
		_u2im[i] = ui;
	}


}

