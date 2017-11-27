// WaveOpticsCpp.cpp : DLL �A�v���P�[�V�����p�ɃG�N�X�|�[�g�����֐����`���܂��B
//

#include "stdafx.h"
#include "WaveOpticsCpp.h"
#include <math.h>
#include<immintrin.h>

void WaveOpticsCpp::Prop1D(const double _lambda, const int _dir,
	const int _n1, const double* _x1, const double* _y1, const double* _u1re, const double* _u1im,
	const int _n2, const double* _x2, const double* _y2, double* _u2re, double* _u2im)
{
	double k = 2.0*PI / _lambda;


#pragma omp parallel for schedule(static)
	for (int i = 0; i < _n2; i++)
	{
		double ur = 0.0, ui = 0.0;

		for (int j = 0; j < _n1; j++)
		{
			double rx = _x2[i] - _x1[j];
			double ry = _y2[i] - _y1[j];
			double r = sqrt(rx*rx + ry*ry);

			double rr = 1.0 / sqrt(r);
			double tr = cos(-k*r) * rr;
			double ti = _dir* sin(-k*r) * rr;

			double tur = _u1re[j];
			double tui = _u1im[j];

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

		double ur = 0.0, ui = 0.0;

		for (int j = 0; j < _n1; j++)
		{
			double rx = _x2[i] - _x1[j];
			double ry = _y2[i] - _y1[j];
			double rz = _z2[i] - _z1[j];
			double r = sqrt(rx*rx + ry*ry + rz*rz);

			double rr = 1.0 / sqrt(r);
			double tr = cos(-k*r) * rr;
			double ti = _dir* sin(-k*r) * rr;

			double tur = _u1re[j];
			double tui = _u1im[j];

			ur = ur + tur*tr - tui*ti;
			ui = ui + tur*ti + tui*tr;
		}
		_u2re[i] = ur;
		_u2im[i] = ui;
	}


}

