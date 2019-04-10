#pragma once
#ifndef __number_atd__
#define __number_atd__
#include <fstream>
using namespace std;
namespace simple_numbers {
	//  ласс, обобщающает все имеющиес€ числа.
	// явл€етс€ абстрактным, обеспечива€, тем самым,
	// проверку интерфейса
	class number {
	//private:
	public:
		string ed_izm;
	
		// иденитфикаци€, порождение и ввод числа из потока
			static number* In(ifstream &ifst);
		virtual void InData(ifstream &ifst); // ввод “јЅЋ»÷ј ¬»–“”јЋ№Ќџ’ ‘”Ќ ÷»…, 
		//при вызове обычных функций лезет в класс, виртуальные таскаютс€ с объектом. „истые виртуальные лишены реализации

		virtual float ToFloat() = 0;
		// сравнение двух объектов 
		bool Compare(number &other);
		virtual void Out(ofstream &ofst); // вывод
		
		virtual void OutComplex(ofstream &ofst);
	protected:
		number() {};

	};
} // end simple_numbers namespace
#endif