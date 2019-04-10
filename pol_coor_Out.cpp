#include "pol_coor_atd.h"
using namespace std;
namespace simple_numbers {
	// Вывод параметров прямоугольника
	void pol_coor::Out(ofstream &ofst) {

		ofst << "It is Polar coordinates: (" << phi
			<< ", " << d << ")" << endl;
		number::Out(ofst);
		ofst << endl;
	}
} // end simple_shapes namespace