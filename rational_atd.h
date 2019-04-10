#pragma once
#ifndef __rational_atd__
#define __rational_atd__
// ��������� �������� ������ number
#include "number_atd.h"
namespace simple_numbers {
	// �������������
	class rational : public number {
	public:
		int a, b; // �������������� � ������ �����

		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		float ToFloat();
		rational() {} // �������� ��� �������������.
	};
} // end simple_numbers namespace
#endif