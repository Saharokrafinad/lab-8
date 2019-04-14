#pragma once
#ifndef __rational_atd__
#define __rational_atd__
#include "number_atd.h"
namespace simple_numbers {
	class rational : public number 
	{
	public:
		int chis, znam; // действительная и мнимая части
		// переопределяем интерфейс класса
		void in_data(ifstream &ifst); // ввод
		void out(ofstream &ofst); // вывод
		float to_float();
		rational() {} // создание без инициализации.
	};
} // end simple_numbers namespace
#endif