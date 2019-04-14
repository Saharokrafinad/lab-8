#include "complex_atd.h"
using namespace std;
namespace simple_numbers 
{
	void complex::in_data(ifstream &ifst) 
	{
		ifst >> re >> im;
		number::in_data(ifst);
	}
} // end simple_shapes namespace