#include "rational_atd.h"
namespace simple_numbers 
{
	float rational::to_float()
	{
		return float(chis) / float(znam);
	}
}