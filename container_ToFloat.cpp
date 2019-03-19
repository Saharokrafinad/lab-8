#include "container_atd.h"
namespace simple_numbers {
	void container::ToFloat(ofstream &ofst) {
		container *p = this;
		int i = 1;
		int  kol = 0;
		//		if ((*begin)->next != nullptr)
		if (this != nullptr)
		{
			do
			{
				kol++;
				p = p->next;
			} while (p != this);
			p = this;
		}
		ofst << "Container contains " << kol
			<< " elements." << endl;
		if (this != nullptr)
		{
			do
			{
				ofst << i << ": ";
				p->num->Out(ofst); 
				ofst << " float form: " << p->num->ToFloat() << endl;
				p = p->next;
				i++;
			} while (p != this);
		}
	}
}