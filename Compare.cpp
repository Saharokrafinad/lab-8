#include "number_atd.h"
namespace simple_numbers {
	// сравнение двух объектов 
	bool number::Compare(number &other) {
		return ToFloat() < other.ToFloat();
	}
}