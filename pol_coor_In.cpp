#include "pol_coor_atd.h"
using namespace std;
namespace simple_numbers {
	// ���� ���������� ������������ �����
	void pol_coor::InData(ifstream &ifst) {
		float D;
		ifst >> phi >> D;

		d = (int)D;
	}
} // end simple_shapes nam