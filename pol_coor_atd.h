#pragma once
#ifndef __pol_coor_atd__
#define __pol_coor_atd__
#include "number_atd.h"
namespace simple_numbers 
{
	class pol_coor : public number 
	{
	public:
		int d; float phi; // действительная и мнимая части
		// переопределяем интерфейс класса
		void in_data(ifstream &ifst); // ввод
		void out(ofstream &ofst); // вывод
		pol_coor() {} // создание без инициализации.
		float to_float();
	};
} // end simple_numbers namespace
#endif