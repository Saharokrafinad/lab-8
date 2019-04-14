#include "container_atd.h"
using namespace std;
namespace simple_numbers 
{
	void container::filter_complex(ofstream &ofst)
	{
		ofst << "Only complex." << endl;
		container *cur = this;
		int i = 1;
		if (this != nullptr)
		{
			do
			{
				ofst << i << ": ";
				cur->num->filter_complex(ofst);
				cur = cur->next;
				i++;
			} while (cur != this);
		}
	}
}