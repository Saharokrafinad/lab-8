#include "complex_atd.h"
using namespace std;
namespace simple_numbers {
	// ����� ���������� ��������������
	void complex::Out(ofstream &ofst) {

		ofst << "It is Complex number: " << x
			<< " + i * (" << y << ")" << endl;
	}
} // end simple_shapes namespace