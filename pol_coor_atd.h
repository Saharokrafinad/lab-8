#pragma once
#ifndef __pol_coor_atd__
#define __pol_coor_atd__
// Требеутся описание класса number
#include "number_atd.h"
namespace simple_numbers {
	// прямоугольник
	class pol_coor : public number {
	public:
		int d; float phi; // действительная и мнимая части

		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		pol_coor() {} // создание без инициализации.
		float ToFloat();
	};
} // end simple_numbers namespace
#endif