#include "rational_atd.h"
using namespace std;
namespace simple_numbers 
{
	void rational::in_data(ifstream &ifst)
	{
		float chis_float, znam_float;
		ifst >> chis_float >> znam_float;
		if (znam_float == 0) znam_float = 1;
		chis = (int)chis_float;
		znam = (int)znam_float;
		number::in_data(ifst);
	}
} // end simple_shapes namespace