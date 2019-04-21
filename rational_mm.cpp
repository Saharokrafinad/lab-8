#include "rational_atd.h"
namespace simple_numbers {
	void rational::multi_method(number *other, ofstream &ofst)
	{
		other->mm_rational(ofst);
	}
}