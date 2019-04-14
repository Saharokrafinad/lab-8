#include "container_atd.h"
#include "number_atd.h"
namespace simple_numbers 
{
	container* container::sort()
	{
		container *con = this;
		container *head = con;
		container *nxt, *out = nullptr, *cur_obj, *pr; //out - ����� - ������� ����
		if (con != nullptr) 
		{
			do 
			{ //���� �� ����� �������� ������
				nxt = con; con = con->next; //��������� ��������� �������
				for (cur_obj = out, pr = nullptr; cur_obj != nullptr && nxt->num->�ompare_num(*cur_obj->num); pr = cur_obj, cur_obj = cur_obj->next);
				//����, ���� �������� ��������� ������� 
				if (pr == nullptr)
				{
					nxt->next = out; out = nxt;
				} //��������� � ������
				else
				{
					nxt->next = cur_obj; pr->next = nxt;
				} //��� ����� �����������
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