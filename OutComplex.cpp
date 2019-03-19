#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	//то, что наследуют все кроме комплексных
	void number::OutComplex(ofstream &ofst) {
		ofst << endl; // пустая строка 
	}
}