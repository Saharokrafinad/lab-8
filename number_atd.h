#pragma once
#ifndef __number_atd__
#define __number_atd__
#include <fstream>
using namespace std;
namespace simple_numbers {
	// �����, ����������� ��� ��������� �����.
	// �������� �����������, �����������, ��� �����,
	// �������� ����������
	class number {
	//private:
	public:
		string ed_izm;
	
		// �������������, ���������� � ���� ����� �� ������
			static number* In(ifstream &ifst);
		virtual void InData(ifstream &ifst); // ���� ������� ����������� �������, 
		//��� ������ ������� ������� ����� � �����, ����������� ��������� � ��������. ������ ����������� ������ ����������

		virtual float ToFloat() = 0;
		// ��������� ���� �������� 
		bool Compare(number &other);
		virtual void Out(ofstream &ofst); // �����
		
		virtual void OutComplex(ofstream &ofst);
	protected:
		number() {};

	};
} // end simple_numbers namespace
#endif