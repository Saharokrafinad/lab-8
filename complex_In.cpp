#include "complex_atd.h"
using namespace std;
namespace simple_numbers {
	// Ввод параметров комплексного числа
	void complex::InData(ifstream &ifst) {
		ifst >> x >> y;
		number::InData(ifst);
	}
} // end simple_shapes namespace