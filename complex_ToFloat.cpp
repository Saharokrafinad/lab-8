#include "complex_atd.h"
namespace simple_numbers {
	float complex::ToFloat()
	{
		return (sqrt(x*x + y*y));
	}
}