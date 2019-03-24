#include "number_atd.h"
// Необходима подключить информацию обо всех имеющихся числах
#include "complex_atd.h"
#include "rational_atd.h"
#include "pol_coor_atd.h"
using namespace std;
namespace simple_numbers {
	// Ввод параметров обобщенной фигуры
	number* number::In(ifstream &ifst) {
		number *num;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			num = new complex;
			num->InData(ifst);
			break;
		case 2:
			num = new rational;
			num->InData(ifst);
			break;
		case 3:
			num = new pol_coor;
			num->InData(ifst);
			break;
		default:
			return 0;
		}
		return num;
	}
} // end simple_numbers namespace