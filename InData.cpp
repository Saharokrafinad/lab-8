#include "number_atd.h"
#include <fstream>
#include <string>
using namespace std;

namespace simple_numbers {
	// ���� ���������� ������ 
	void number::InData(ifstream &ifst)
	{
		ifst >> ed_izm;
	}
}