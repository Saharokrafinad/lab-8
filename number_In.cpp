#include "number_atd.h"
#include "complex_atd.h"
#include "rational_atd.h"
#include "pol_coor_atd.h"
using namespace std;
namespace simple_numbers 
{
	number* number::in(ifstream &ifst) 
	{
		number *num;
		int k;
		ifst >> k;
		switch (k) 
		{
			case 1:
				num = new complex;
				num->in_data(ifst);
				break;
			case 2:
				num = new rational;
				num->in_data(ifst);
				break;
			case 3:
				num = new pol_coor;
				num->in_data(ifst);
				break;
			default:
				return 0;
		}
		return num;
	}
} // end simple_numbers namespace