#include "container_atd.h"
namespace simple_numbers {
	// ������������� ����������
	container::container()
	{
		next = NULL;
		num = NULL;
	}
	// ������� ���������� �� ���������
	void container::Clear() {
		if (this == 0)
			return;
		container *p = this;//this ��������� �� ������ ������
		container *t;
		if (p != nullptr)
		{
			do
			{
				t = p;
				p = p->next;
				delete t;
			} while (p != this);
		}
		p = this;
		p = NULL;
	}
} // end simple_shapes namespace