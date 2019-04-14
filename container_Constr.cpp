#include "container_atd.h"
namespace simple_numbers 
{
	// Инициализация контейнера
	container::container()
	{
		next = NULL;
		num = NULL;
	}
	// Очистка контейнера от элементов
	void container::clear() 
	{
		if (this == 0)
			return;
		container *cur = this;//this указывает на начало списка
		container *cur_next;
		if (cur != nullptr)
		{
			do
			{
				cur_next = cur;
				cur = cur->next;
				delete cur_next;
			} while (cur != this);
		}
		cur = this;
		cur = NULL;
	}
} // end simple_shapes namespace