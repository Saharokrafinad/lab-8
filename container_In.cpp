#include "container_atd.h"
using namespace std;
namespace simple_numbers {
	// ���� ����������� ����������
	void container::In(ifstream &ifst) {
		int kol = 0;
		//container *end = *begin;
		container *end = nullptr;
		number *temp;
		while (!ifst.eof())
		{
			//if (!ifst.)
			if (kol == 0)
			{
				temp = number::In(ifst);
				if (temp != NULL) {
					end = this;
					//(*begin)->next = nullptr;
					this->num = temp;   // ������� ��������� ������ ������
					this->next = this;
					kol++;
				}
			}
			else
			{
				temp = number::In(ifst);
				if (temp != NULL) {
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