#pragma once
#ifndef __pol_coor_atd__
#define __pol_coor_atd__
// ��������� �������� ������ number
#include "number_atd.h"
namespace simple_numbers {
	// �������������
	class pol_coor : public number {
	public:
		int d; float phi; // �������������� � ������ �����

		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		pol_coor() {} // �������� ��� �������������.
		float ToFloat();
	};
} // end simple_numbers namespace
#endif