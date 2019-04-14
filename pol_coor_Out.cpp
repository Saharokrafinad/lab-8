#include "pol_coor_atd.h"
using namespace std;
namespace simple_numbers
{
	void pol_coor::out(ofstream &ofst)
	{
		ofst << "It is Polar coordinates: (" << phi
			<< ", " << d << ")" << endl;
		number::out(ofst);
		ofst << endl;
	}
} // end simple_shapes namespace