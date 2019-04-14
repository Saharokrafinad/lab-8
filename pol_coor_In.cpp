#include "pol_coor_atd.h"
using namespace std;
namespace simple_numbers 
{
	void pol_coor::in_data(ifstream &ifst)
	{
		float d_float;
		ifst >> phi >> d_float;
		d = (int)d_float;
		number::in_data(ifst);
	}
} // end simple_shapes nam