#include "rational_atd.h"
using namespace std;
namespace simple_numbers 
{
	int gcd(int a, int b)
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
	void rational::out(ofstream &ofst) 
	{
		int c = gcd(chis, znam);
		chis = chis / c;
		znam = znam / c;
		ofst << "It is Rational number: "
			<< chis << "/" << znam << endl;
		number::out(ofst); 
		ofst << endl;
	}
} // end simple_shapes namespace