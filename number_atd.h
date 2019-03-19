#ifndef __number_atd__
#define __number_atd__
#include <fstream>
using namespace std;
namespace simple_numbers {
	//  ласс, обобщающает все имеющиес€ числа.
	// явл€етс€ абстрактным, обеспечива€, тем самым,
	// проверку интерфейса
	class number {
	public:
		// иденитфикаци€, порождение и ввод числа из потока
			static number* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0; // ввод “јЅЋ»÷ј ¬»–“”јЋ№Ќџ’ ‘”Ќ ÷»…, 
		//при вызове обычных функций лезет в класс, виртуальные таскаютс€ с объектом. „истые виртуальные лишены реализации
		virtual void Out(ofstream &ofst) = 0; // вывод
		virtual void OutComplex(ofstream &ofst);
	};
} // end simple_numbers namespace
#endif