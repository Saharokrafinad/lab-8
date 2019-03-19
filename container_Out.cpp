#include "container_atd.h"
using namespace std;
namespace simple_numbers {
	// Вывод содержимого контейнера
	void container::Out(ofstream &ofst) {
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
		//		if ((*begin)->next != nullptr)
		if (this != nullptr)
		{
			do
			{
				ofst << i << ": ";
				p->num->Out(ofst);    
				p = p->next;
				i++;
			} while (p != this);
		}
	}
} // end simple_shapes namespace