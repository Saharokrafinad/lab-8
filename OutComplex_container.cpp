#include "container_atd.h"
using namespace std;
namespace simple_numbers {
	void container::OutComplex(ofstream &ofst)
	{
		ofst << "Only complex." << endl;
		container *p = this;
		int i = 1;
		if (this != nullptr)
		{
			do
			{
				ofst << i << ": ";
				p->num->OutComplex(ofst);
				p = p->next;
				i++;
			} while (p != this);
		}
	}
}