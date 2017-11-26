// これは メイン DLL ファイルです。

#include "stdafx.h"
#include<Windows.h>
#include "WaveOpticsCpp.h"
#include "WaveOpticsCpp_Wrapper.h"

void ClsNac::WaveOpticsCpp_Wrapper::Prop1D(double _lambda, int _dir,
	int _n1, array<double>^ _x1, array<double>^ _y1, array<double>^ _u1re, array<double>^ _u1im,
	int _n2, array<double>^ _x2, array<double>^ _y2, array<double>^ _u2re, array<double>^ _u2im)
{

	pin_ptr<double> ptr_x1 = &_x1[0];
	pin_ptr<double> ptr_y1 = &_y1[0];
	pin_ptr<double> ptr_u1re = &_u1re[0];
	pin_ptr<double> ptr_u1im = &_u1im[0];
	pin_ptr<double> ptr_x2 = &_x2[0];
	pin_ptr<double> ptr_y2 = &_y2[0];
	pin_ptr<double> ptr_u2re = &_u1re[0];
	pin_ptr<double> ptr_u2im = &_u1im[0];

	WaveOpticsCpp::Prop1D(_lambda, _dir,
		_n1, ptr_x1, ptr_y1, ptr_u1re, ptr_u1im,
		_n2, ptr_x2, ptr_y2, ptr_u2re, ptr_u2im);

	ptr_x1 = nullptr;
	ptr_y1 = nullptr;
	ptr_u1re = nullptr;
	ptr_u1im = nullptr;
	ptr_x2 = nullptr;
	ptr_y2 = nullptr;
	ptr_u2re = nullptr;
	ptr_u2im = nullptr;

}

void ClsNac::WaveOpticsCpp_Wrapper::Prop2D(double _lambda, int _dir,
	int _n1, array<double>^ _x1, array<double>^ _y1, array<double>^ _z1, array<double>^ _u1re, array<double>^ _u1im,
	int _n2, array<double>^ _x2, array<double>^ _y2, array<double>^ _z2, array<double>^ _u2re, array<double>^ _u2im)
{
	Int32^ p1 = gcnew Int32(123);
	pin_ptr<double> ptr_x1 = &_x1[0];
	pin_ptr<double> ptr_y1 = &_y1[0];
	pin_ptr<double> ptr_z1 = &_z1[0];
	pin_ptr<double> ptr_u1re = &_u1re[0];
	pin_ptr<double> ptr_u1im = &_u1im[0];
	pin_ptr<double> ptr_x2 = &_x2[0];
	pin_ptr<double> ptr_y2 = &_y2[0];
	pin_ptr<double> ptr_z2 = &_z2[0];
	pin_ptr<double> ptr_u2re = &_u2re[0];
	pin_ptr<double> ptr_u2im = &_u2im[0];

	WaveOpticsCpp::Prop2D(_lambda, _dir,
		_n1, ptr_x1, ptr_y1, ptr_z1, ptr_u1re, ptr_u1im,
		_n2, ptr_x2, ptr_y2, ptr_z2, ptr_u2re, ptr_u2im);

	ptr_x1 = nullptr;
	ptr_y1 = nullptr;
	ptr_z1 = nullptr;
	ptr_u1re = nullptr;
	ptr_u1im = nullptr;
	ptr_x2 = nullptr;
	ptr_y2 = nullptr;
	ptr_z2 = nullptr;
	ptr_u2re = nullptr;
	ptr_u2im = nullptr;

}
