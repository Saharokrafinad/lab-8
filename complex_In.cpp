#include "complex_atd.h"
using namespace std;
namespace simple_numbers {
	// Ввод параметров комплексного числа
	void complex::InData(ifstream &ifst) {
		ifst >> x >> y;
	}
} // end simple_shapes namespace