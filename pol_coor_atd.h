#ifndef __pol_coor_atd__
#define __pol_coor_atd__
// ��������� �������� ������ number
#include "number_atd.h"
namespace simple_numbers {
	// �������������
	class pol_coor : public number {
		int phi, d; // �������������� � ������ �����
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		pol_coor() {} // �������� ��� �������������.
	};
} // end simple_numbers namespace
#endif