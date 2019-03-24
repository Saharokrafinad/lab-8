#ifndef __pol_coor_atd__
#define __pol_coor_atd__
// Требеутся описание класса number
#include "number_atd.h"
namespace simple_numbers {
	// прямоугольник
	class pol_coor : public number {
		int phi, d; // действительная и мнимая части
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		pol_coor() {} // создание без инициализации.
	};
} // end simple_numbers namespace
#endif