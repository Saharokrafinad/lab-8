#include "number_atd.h"
namespace simple_numbers 
{
	bool number::ñompare_num(number &other)
	{
		return to_float() < other.to_float();
	}
}
