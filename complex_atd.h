#pragma once
#ifndef __complex_atd__
#define __complex_atd__
// ��������� �������� ������ number
#include "number_atd.h"
namespace simple_numbers {
	// �������������
	class complex : public number {
		
	public:
		float x, y; // �������������� � ������ �����
		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����

		float ToFloat();

		void OutComplex(ofstream &ofst);

		complex() {} // �������� ��� �������������.
	};
} // end simple_numbers namespace
#endif