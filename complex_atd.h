#pragma once
#ifndef __complex_atd__
#define __complex_atd__
// ��������� �������� ������ number
#include "number_atd.h"
namespace simple_numbers 
{
	class complex : public number 
	{	
	public:
		float re, im; // �������������� � ������ �����
		// �������������� ��������� ������
		void in_data(ifstream &ifst); // ����
		void out(ofstream &ofst); // �����
		void multi_method(number *other, ofstream &ofst);
		void mm_complex(ofstream &ofst);
		void mm_rational(ofstream &ofst);
		void mm_pol_coor(ofstream &ofst);
		float to_float();
		void filter_complex(ofstream &ofst);
		complex() {} // �������� ��� �������������.
	};
} // end simple_numbers namespace
#endif