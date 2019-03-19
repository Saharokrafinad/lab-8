#include "container_atd.h"
namespace simple_numbers {
	// Инициализация контейнера
	container::container()
	{
		next = NULL;
		num = NULL;
	}
	// Очистка контейнера от элементов
	void container::Clear() {
		if (this == 0)
			return;
		container *p = this;//this указывает на начало списка
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