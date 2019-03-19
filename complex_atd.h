#ifndef __complex_atd__
#define __complex_atd__
// Требеутся описание класса number
#include "number_atd.h"
namespace simple_numbers {
	// прямоугольник
	class complex : public number {
		float x, y; // действительная и мнимая части
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		complex() {} // создание без инициализации.
	};
} // end simple_numbers namespace
#endif