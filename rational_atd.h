#pragma once
#ifndef __rational_atd__
#define __rational_atd__
#include "number_atd.h"
namespace simple_numbers {
	class rational : public number 
	{
	public:
		int chis, znam; // �������������� � ������ �����
		// �������������� ��������� ������
		void in_data(ifstream &ifst); // ����
		void out(ofstream &ofst); // �����
		float to_float();
		rational() {} // �������� ��� �������������.
	};
} // end simple_numbers namespace
#endif