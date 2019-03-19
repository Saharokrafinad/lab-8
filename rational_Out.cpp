#include "rational_atd.h"

using namespace std;
namespace simple_numbers {
	// Вывод параметров прямоугольника
	
	int GCD(int a, int b)
	{
		while (a != 1 && b != 1 && a*b != 0)
		{
			if (a>b)
			{
				a %= b;
			}
			else
			{
				b %= a;
			}
		}
		if (a==1 || b==1)
		{
			return 1;
		}
		else
		{
			return a + b;
		}

		

	}
	void rational::Out(ofstream &ofst) {
		//int GCD(int a, int b);
		int c = GCD(a, b);
		a = a / c;
		b = b / c;
		ofst << "It is Rational number: "
			<< a << "/" << b << endl;
	}

	
} // end simple_shapes namespace