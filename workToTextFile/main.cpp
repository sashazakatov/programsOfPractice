/*
	Написати програму, яка зчитує текст із файлу та 
	виводить на екран лише рядки, що містять двозначні числа
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	string filePath = "numders.txt";
	string numder;

	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);

	try
	{
		fin.open(filePath);
	}
	catch (const ifstream::failure& ex)
	{
		cout << "Error: " << ex.what() << endl;
		cout << "Code " << ex.code() << endl;
		return 0;
	}
	catch (...)
	{
		cout << "file error" << endl;
		return 0;
	}

	cout << "Resolt: " << endl;

	while (!fin.eof())
	{
		numder = "";
		getline(fin, numder);
		if (stoi(numder) > 9 || stoi(numder) < -9) {
			cout << "  " << numder << endl;
		}
	}

	fin.close();

	system("PAUSE");
	return 0;
}