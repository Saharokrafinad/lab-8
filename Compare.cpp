#include "number_atd.h"
namespace simple_numbers {
	// ��������� ���� �������� 
	bool number::Compare(number &other) {
		return ToFloat() < other.ToFloat();
	}
}