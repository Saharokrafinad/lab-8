#include "container_atd.h"
#include "number_atd.h"
namespace simple_numbers {
	// Сортировка содержимого контейнера 
	container* container::Sort()
	{
		container *con = this;
		container *head = con;
		container *q, *out = nullptr, *p, *pr; //out - выход - сначала пуст
		if (con != nullptr) {
			do { //пока не конец входного списка
				q = con; con = con->next; //исключить очередной элемент
				for (p = out, pr = nullptr; p != nullptr && q->num->Compare(*p->num); pr = p, p = p->next);
				//ищем, куда включить очередной элемент 
				if (pr == nullptr)
				{
					q->next = out; out = q;
				} //включение в начало
				else
				{
					q->next = p; pr->next = q;
				} //или после предыдущего
			} while (con != head);
			container *cur = out;
			while (cur->next != nullptr)
			{
				cur = cur->next;
			}
			cur->next = out;
		}
		return out;
	}
}