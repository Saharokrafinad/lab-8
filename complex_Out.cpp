#include "complex_atd.h"
using namespace std;
namespace simple_numbers 
{
	void complex::out(ofstream &ofst) 
	{
		ofst << "It is Complex number: " << re
			<< " + i * (" << im << ")" << endl;
		number::out(ofst); 
		ofst << endl;
	}
} // end simple_shapes namespace