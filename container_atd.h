#pragma once
#ifndef __container_atd__
#define __container_atd__
#include "number_atd.h"
namespace simple_numbers 
{
	class container 
	{
	public:
		number* num;
		container* next;
		void in(ifstream &ifst); // ввод
		void out(ofstream &ofst); // вывод
		void to_float(ofstream &ofst);
		container* sort(); // сортировка контейнера
		void filter_complex(ofstream &ofst);
		void clear(); // очистка контейнера от фигур
		container(); // инициализация контейнера
		~container() { clear(); } // утилизация контейнера
	};
} // end simple_shapes namespace
#endif