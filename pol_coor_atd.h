#pragma once
#ifndef __pol_coor_atd__
#define __pol_coor_atd__
#include "number_atd.h"
namespace simple_numbers 
{
	class pol_coor : public number 
	{
	public:
		int d; float phi; // �������������� � ������ �����
		// �������������� ��������� ������
		void in_data(ifstream &ifst); // ����
		void out(ofstream &ofst); // �����
		pol_coor() {} // �������� ��� �������������.
		float to_float();
	};
} // end simple_numbers namespace
#endif