#include "number_atd.h"
#include <fstream>
#include <string>
using namespace std;

namespace simple_numbers {

	// ����� ���������� ������ 
	void number::Out(ofstream &ofst)
	{
		ofst << "measure = " << ed_izm;
	}
}