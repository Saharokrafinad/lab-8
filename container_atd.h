#ifndef __container_atd__
#define __container_atd__
#include "number_atd.h"
namespace simple_numbers {
		class container {
			number* num;
			container* next;
		public:
			void In(ifstream &ifst); // ввод
			void Out(ofstream &ofst); // вывод
			void Clear(); // очистка контейнера от фигур
			container(); // инициализация контейнера
			~container() { Clear(); } // утилизация контейнера
	};
} // end simple_shapes namespace
#endif