#include "rational_atd.h"
using namespace std;
namespace simple_numbers {
	// Ввод параметров комплексного числа
	void rational::InData(ifstream &ifst) {
		float A, B;
		ifst >> A >> B;
		if (B == 0) B = 1;

		a = (int)A;
		b = (int)B;
	}
} // end simple_shapes namespace