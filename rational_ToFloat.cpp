#include "rational_atd.h"
namespace simple_numbers {
	float rational::ToFloat()
	{
		return float(a) / float(b);
	}
}