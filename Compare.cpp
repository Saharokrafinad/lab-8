#include "number_atd.h"
namespace simple_numbers 
{
	bool number::�ompare_num(number &other)
	{
		return to_float() < other.to_float();
	}
}
