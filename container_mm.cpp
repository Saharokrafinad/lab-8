#include "container_atd.h"
namespace simple_numbers {
	void container::multi_method(container **begin, ofstream &ofst) 
	{
		ofst << "Multimethod." << endl;
		for (container *first = *begin; first->next != *begin; first = first->next)
		{
			for (container *second = first->next; second != *begin; second = second->next)
			{
				first->num->multi_method(second->num, ofst);
				first->num->out(ofst);
				second->num->out(ofst);
			}
		}
	}}