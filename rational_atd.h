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
		void multi_method(number *other, ofstream &ofst);
		void mm_complex(ofstream &ofst);
		void mm_rational(ofstream &ofst);
		void mm_pol_coor(ofstream &ofst);
		float to_float();
		rational() {} // создание без инициализации.
	};
} // end simple_numbers namespace
#endif