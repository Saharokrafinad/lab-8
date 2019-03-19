#include "number_atd.h"
#include <fstream>
#include <string>
using namespace std;

namespace simple_numbers {
	// ¬вод параметров фигуры 
	void number::InData(ifstream &ifst)
	{
		ifst >> ed_izm;
	}
}