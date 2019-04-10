#pragma once
#ifndef __container_atd__
#define __container_atd__
#include "number_atd.h"
namespace simple_numbers {
		class container {
		public:
			number* num;
			container* next;
	
			void In(ifstream &ifst); // ����
			void Out(ofstream &ofst); // �����

			void ToFloat(ofstream &ofst);
			container* Sort(); // ���������� ����������

			void OutComplex(ofstream &ofst);

			void Clear(); // ������� ���������� �� �����
			container(); // ������������� ����������
			~container() { Clear(); } // ���������� ����������
	};
} // end simple_shapes namespace
#endif