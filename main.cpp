#include <iostream>
#include <fstream>
#include "container_atd.h"
using namespace std;

using namespace simple_numbers;
int main(int argc, char* argv[]) {
	if (argc != 3) {
		cout << "incorrect command line! "
			"Waited: command infile outfile" << endl;
		exit(1);
	}

	ifstream ifst(argv[1]);//открытие файлов
	ofstream ofst(argv[2]);
	//ifstream ifst("C:\\in.txt");//открытие файлов
	//ofstream ofst("C:\\out.txt");
	char symb;
	while (!ifst.eof())
	{
		ifst >> symb;
		if ((symb < 48 || symb >57) && symb != 45 && symb != 46)
		{
			cout << "incorrect input file!" << endl;
			exit(1);
		}
	}
	ifst.close();
	ifst.open(argv[1]);

	cout << "Start" << endl;
	container* begin = new container;
	//container con;

	begin->In(ifst);
	ofst << "Filled container. " << endl;
	begin->ToFloat(ofst);
	cout << "Stop" << endl;
	return 0;
}