#ifndef __rational_atd__
#define __rational_atd__
// ��������� �������� ������ number
#include "number_atd.h"
namespace simple_numbers {
	// �������������
	class rational : public number {
		int a, b; // �������������� � ������ �����
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		rational() {} // �������� ��� �������������.
	};
} // end simple_numbers namespace
#endif