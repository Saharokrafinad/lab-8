#include "container_atd.h"
using namespace std;
namespace simple_numbers 
{
	// ���� ����������� ����������
	void container::in(ifstream &ifst)
	{
		int kol = 0;
		container *end = nullptr;
		number *temp;
		while (!ifst.eof())
		{
			if (kol == 0)
			{
				temp = number::in(ifst);
				if (temp != NULL) 
				{
					end = this;
					this->num = temp;
					this->next = this;
					kol++;
				}
			}
			else
			{
				temp = number::in(ifst);
				if (temp != NULL) 
				{
					end->next = new container; // ��������� �������� ������ ��� ����� ��
					end = end->next;  // � �������� ���� �� 
					end->num = temp;
					end->next = this;
					kol++;
				}
			}
		}
	}
} // end simple_shapes namespace