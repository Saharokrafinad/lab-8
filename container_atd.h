#pragma once
#ifndef __container_atd__
#define __container_atd__
#include "number_atd.h"
namespace simple_numbers 
{
	class container 
	{
	public:
		number* num;
		container* next;
		void in(ifstream &ifst); // ����
		void out(ofstream &ofst); // �����
		void to_float(ofstream &ofst);
		container* sort(); // ���������� ����������
		void filter_complex(ofstream &ofst);
		void clear(); // ������� ���������� �� �����
		container(); // ������������� ����������
		~container() { clear(); } // ���������� ����������
	};
} // end simple_shapes namespace
#endif