#include "number_atd.h"
#include <fstream>
#include <string>
using namespace std;
namespace simple_numbers 
{ 
	void number::out(ofstream &ofst)
	{
		ofst << "measure = " << measure;
	}
}