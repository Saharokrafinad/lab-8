#pragma once
#ifndef __complex_atd__
#define __complex_atd__
// Требеутся описание класса number
#include "number_atd.h"
namespace simple_numbers {
	// прямоугольник
	class complex : public number {
		
	public:
		float x, y; // действительная и мнимая части
		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод

		float ToFloat();

		void OutComplex(ofstream &ofst);

		complex() {} // создание без инициализации.
	};
} // end simple_numbers namespace
#endif