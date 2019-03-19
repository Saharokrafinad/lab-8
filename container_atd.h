#ifndef __container_atd__
#define __container_atd__
#include "number_atd.h"
namespace simple_numbers {
		class container {
			number* num;
			container* next;
		public:
			void In(ifstream &ifst); // ����
			void Out(ofstream &ofst); // �����
			void Clear(); // ������� ���������� �� �����
			container(); // ������������� ����������
			~container() { Clear(); } // ���������� ����������
	};
} // end simple_shapes namespace
#endif