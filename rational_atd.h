#pragma once
#ifndef __rational_atd__
#define __rational_atd__
// Требеутся описание класса number
#include "number_atd.h"
namespace simple_numbers {
	// прямоугольник
	class rational : public number {
	public:
		int a, b; // действительная и мнимая части

		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		float ToFloat();
		rational() {} // создание без инициализации.
	};
} // end simple_numbers namespace
#endif