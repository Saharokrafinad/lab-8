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
		string ed_izm;
	public:
		// �������������, ���������� � ���� ����� �� ������
			static number* In(ifstream &ifst);
		virtual void InData(ifstream &ifst); // ���� ������� ����������� �������, 
		//��� ������ ������� ������� ����� � �����, ����������� ��������� � ��������. ������ ����������� ������ ����������
		virtual void Out(ofstream &ofst); // �����
	protected:
		number() {};
	};
} // end simple_numbers namespace
#endif