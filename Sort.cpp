#include "container_atd.h"
#include "number_atd.h"
namespace simple_numbers 
{
	container* container::sort()
	{
		container *con = this;
		container *head = con;
		container *nxt, *out = nullptr, *cur_obj, *pr; //out - выход - сначала пуст
		if (con != nullptr) 
		{
			do 
			{ //пока не конец входного списка
				nxt = con; con = con->next; //исключить очередной элемент
				for (cur_obj = out, pr = nullptr; cur_obj != nullptr && nxt->num->сompare_num(*cur_obj->num); pr = cur_obj, cur_obj = cur_obj->next);
				//ищем, куда включить очередной элемент 
				if (pr == nullptr)
				{
					nxt->next = out; out = nxt;
				} //включение в начало
				else
				{
					nxt->next = cur_obj; pr->next = nxt;
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