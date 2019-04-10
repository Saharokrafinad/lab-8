//#include "stdafx.h"
#include "CppUnitTest.h"
#include "../3OOP/complex_atd.h"
#include "../3OOP/rational_atd.h"
#include "../3OOP/container_atd.h"
#include "../3OOP/number_atd.h"
#include "../3OOP/pol_coor_atd.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace simple_numbers;
using namespace std;

namespace simple_numbers {
	

} // end simple_numbers namespace

namespace UnitTest1
{		
	TEST_CLASS(complex_test)
	{
	public:
		
		TEST_METHOD(complexToFloat)
		{
			complex c;
			c.x = 6;
			c.y = -8;
			float exp = 10;
			Assert::AreEqual(exp, c.ToFloat());
		}
		TEST_METHOD(complexIn)
		{
			complex *c = new complex;
			ifstream test_file("../3OOP/Test_Files/complex_In.txt");
			c->InData(test_file);
			float expected_x = 15.8;
			float expected_y = 87.954;
			string expected_meas = "cm";
			Assert::AreEqual(expected_x, c->x);
			Assert::AreEqual(expected_y, c->y);
			Assert::AreEqual(expected_meas, c->ed_izm);
		}
		TEST_METHOD(complexOut)
		{
			complex c;
			c.x = 3.4;
			c.y = 5.7;
			c.ed_izm = "metr";
			ofstream test_file_out("../3OOP/Test_Files/Complex_Out.txt");
			c.Out(test_file_out);
			test_file_out.close();
			ifstream test_file_in("../3OOP/Test_Files/Complex_Out.txt");
			string str1;
			getline(test_file_in, str1);
			string str2;
			getline(test_file_in, str2);
			string exp1 = "It is Complex number: 3.4 + i * (5.7)";
			string exp2 = "measure = metr";
			Assert::AreEqual(exp1, str1);
			Assert::AreEqual(exp2, str2);
		}

	};
	TEST_CLASS(rational_test)
	{
	public:

		TEST_METHOD(rationalToFloat)
		{
			rational r;
			r.a = 1;
			r.b = 5;
			float exp = 0.2;
			Assert::AreEqual(exp, r.ToFloat());
		}
		TEST_METHOD(rationalIn)
		{
			rational *r = new rational;
			ifstream test_file("../3OOP/Test_Files/rational_In.txt");
			r->InData(test_file);
			int expected_a = 15;//ג פאיכו 15,8
			int expected_b = 87;//ג פאיכו 87,954
			string expected_meas = "kg";
			Assert::AreEqual(expected_a, r->a);
			Assert::AreEqual(expected_b, r->b);
			Assert::AreEqual(expected_meas, r->ed_izm);
		}
		TEST_METHOD(rationalOut)
		{
			rational r;
			r.a = 3;
			r.b = 5;
			r.ed_izm = "metr";
			ofstream test_file_out("../3OOP/Test_Files/Rational_Out.txt");
			r.Out(test_file_out);
			test_file_out.close();
			ifstream test_file_in("../3OOP/Test_Files/Rational_Out.txt");
			string str1;
			getline(test_file_in, str1);
			string str2;
			getline(test_file_in, str2);
			string exp1 = "It is Rational number: 3/5";
			string exp2 = "measure = metr";
			Assert::AreEqual(exp1, str1);
			Assert::AreEqual(exp2, str2);
		}
	};

	TEST_CLASS(pol_coorTest)
	{
	public:

		TEST_METHOD(pol_coorToFloat)
		{
			pol_coor pc;
			pc.phi = 5.2;
			pc.d = 7;
			float exp = 12.2;
			Assert::AreEqual(exp, pc.ToFloat());
		}
		TEST_METHOD(pol_coorIn)
		{
			pol_coor *pc = new pol_coor;
			ifstream test_file("../3OOP/Test_Files/pol_coor_In.txt");
			pc->InData(test_file);
			float expected_phi = 45.8;
			int expected_d = 87;//ג פאיכו 87,954
			string expected_meas = "grad";
			Assert::AreEqual(expected_phi, pc->phi);
			Assert::AreEqual(expected_d, pc->d);
			Assert::AreEqual(expected_meas, pc->ed_izm);
		}
		TEST_METHOD(pol_coorOut)
		{
			pol_coor pc;
			pc.phi = 30.8;
			pc.d = 5;
			pc.ed_izm = "metr";
			ofstream test_file_out("../3OOP/Test_Files/Pol_coor_Out.txt");
			pc.Out(test_file_out);
			test_file_out.close();
			ifstream test_file_in("../3OOP/Test_Files/Pol_coor_Out.txt");
			string str1;
			getline(test_file_in, str1);
			string str2;
			getline(test_file_in, str2);
			string exp1 = "It is Polar coordinates: (30.8, 5)";
			string exp2 = "measure = metr";
			Assert::AreEqual(exp1, str1);
			Assert::AreEqual(exp2, str2);
		}
	};
	TEST_CLASS(Compare_test)
	{
	public:

		TEST_METHOD(Compare)
		{
			pol_coor pc;
			complex c;
			c.x = 5;
			c.y = 4;
			pc.phi = 10.96;
			pc.d = 30;
			bool exp = true;
			Assert::AreEqual(exp, c.Compare(pc));
		}

	};



	TEST_CLASS(container_test)
	{
	public:

		TEST_METHOD(containerIn)
		{
			container *begin = new container;
			ifstream test_file_in("../3OOP/Test_files/Container_In.txt");

			begin->In(test_file_in);
			bool type = true;
			string str = typeid(*(begin->num)).name();
			string str1 = "class simple_numbers::complex";
			Assert::AreEqual(str,str1);
			str = typeid(*(begin->next->num)).name() ;
			str1 = "class simple_numbers::rational";
			Assert::AreEqual(str, str1);
			str = typeid(*(begin->next->next->num)).name();
			str1 = "class simple_numbers::pol_coor";
			Assert::AreEqual(str, str1);



		}
		TEST_METHOD(containerOut)
		{
			container *begin = new container;
			complex *c = new complex;
			c->x = 5.2;
			c->y = 7.95;
			c->ed_izm = "metr";
			begin->num = c;

			container *second = new container;
			rational *r = new rational;
			r->a = 78;
			r->b = 75;
			r->ed_izm = "litr";
			second->num = r;
			begin->next = second;

			container *therd = new container;
			pol_coor *pc = new pol_coor;
			pc->phi = 90;
			pc->d = 71;
			pc->ed_izm = "sm";
			therd->num = pc;
			therd->next = begin;
			begin->next->next = therd;

			ofstream test_file_out("../3OOP/Test_Files/Container_Out.txt");

			begin->Out(test_file_out);
			test_file_out.close();
			ifstream test_file_in("../3OOP/Test_Files/Container_Out.txt");
			string str[7];
			for (int i = 0;i < 7;i++)
			{
				getline(test_file_in, str[i]);
			}
			string exp[7];
			exp[0] = "Container contains 3 elements.";
			exp[1] = "1: It is Complex number: 5.2 + i * (7.95)";
			exp[2] = "measure = metr";
			exp[3] = "2: It is Rational number: 26/25";
			exp[4] = "measure = litr";
			exp[5] = "3: It is Polar coordinates: (90, 71)";
			exp[6] = "measure = sm";
			for (int i = 0; i<7;i++)

				Assert::AreEqual(exp[i], str[i]);
		}
		TEST_METHOD(Sort)
		{
			container *begin = new container;
			complex *c = new complex;
			c->x = 5.2;
			c->y = 7.95;
			c->ed_izm = "metr";
			begin->num = c;//9.5

			container *second = new container;
			rational *r = new rational;
			r->a = 78;
			r->b = 75;
			r->ed_izm = "litr";
			second->num = r;
			begin->next = second;//1.04

			container *therd = new container;
			pol_coor *pc = new pol_coor;
			pc->phi = 90;
			pc->d = 71;
			pc->ed_izm = "sm";
			therd->num = pc;
			therd->next = begin;
			begin->next->next = therd;//161

			container* out = begin->Sort();
			string str = out->num->ed_izm;
			string str1 = "sm";
			Assert::AreEqual(str, str1);
			str = out->next->num->ed_izm;
			str1 = "metr";
			Assert::AreEqual(str, str1);
			str = out->next->next->num->ed_izm;
			str1 = "litr";
			Assert::AreEqual(str, str1);
		}
		TEST_METHOD(Filtr)
		{
			container *begin = new container;
			complex *c = new complex;
			c->x = 5.2;
			c->y = 7.95;
			c->ed_izm = "metr";
			begin->num = c;//9.5

			container *second = new container;
			rational *r = new rational;
			r->a = 78;
			r->b = 75;
			r->ed_izm = "litr";
			second->num = r;
			begin->next = second;//1.04

			container *therd = new container;
			pol_coor *pc = new pol_coor;
			pc->phi = 90;
			pc->d = 71;
			pc->ed_izm = "sm";
			therd->num = pc;
			therd->next = begin;
			begin->next->next = therd;//161

			ofstream test_file_out("../3OOP/Test_Files/Filtr.txt");

			begin->OutComplex(test_file_out);
			test_file_out.close();
			ifstream test_file_in("../3OOP/Test_Files/Filtr.txt");
			string str1;
			getline(test_file_in, str1);
			string str2;
			getline(test_file_in, str2);
			string str3;
			getline(test_file_in, str3);
			string str4;
			getline(test_file_in, str4);
			string str5;
			getline(test_file_in, str5);

			string exp1 = "Only complex.";
			string exp2 = "1: It is Complex number: 5.2 + i * (7.95)";
			string exp3 = "measure = metr";
			string exp4 = "2: ";
			string exp5 = "3: ";

			Assert::AreEqual(exp1, str1);
			Assert::AreEqual(exp2, str2);
			Assert::AreEqual(exp3, str3);
			Assert::AreEqual(exp4, str4);
			Assert::AreEqual(exp5, str5);

		}
	};




}