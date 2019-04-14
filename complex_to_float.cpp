#include "complex_atd.h"
namespace simple_numbers 
{
	float complex::to_float()
	{
		return (sqrt(re*re + im*im));
	}
}