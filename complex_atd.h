#pragma once
#ifndef __complex_atd__
#define __complex_atd__
// Требеутся описание класса number
#include "number_atd.h"
namespace simple_numbers 
{
	class complex : public number 
	{	
	public:
		float re, im; // действительная и мнимая части
		// переопределяем интерфейс класса
		void in_data(ifstream &ifst); // ввод
		void out(ofstream &ofst); // вывод
		void multi_method(number *other, ofstream &ofst);
		void mm_complex(ofstream &ofst);
		void mm_rational(ofstream &ofst);
		void mm_pol_coor(ofstream &ofst);
		float to_float();
		void filter_complex(ofstream &ofst);
		complex() {} // создание без инициализации.
	};
} // end simple_numbers namespace
#endif