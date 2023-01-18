#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	string filePath = "test.txt";
	string numder;

	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);

	try
	{
		fin.open(filePath);
	}
	catch (const ifstream::failure& ex)
	{
		cout << ex.what() << endl;
	}

	while (!fin.eof())
	{
		numder = "";
		getline(fin, numder);
		if (stoi(numder) > 9 || stoi(numder) < -9) {
			cout << numder << endl;
		}
	}

	fin.close();
	return 0;
}