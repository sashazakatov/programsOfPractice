#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "Aeroflot.h"

using namespace std;

int main() {
	string filePath = "dataAdoutFlights.txt";
	vector<Aeroflot> aeroflots;
	string str1, srt2, str3;


	string typeOfAircraft;

	cout << "Enter type of aircraft: ";
	cin >> typeOfAircraft;
	cout << "____________________________\n\n";

	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);

	try 
	{
		fin.open(filePath);
	}
	catch (const ifstream::failure & ex)
	{
		cout << ex.what() << endl;
	}
	
	while (!fin.eof())
	{
		Aeroflot aeroflot;
		getline(fin, aeroflot.typeOfAircraft);
		getline(fin, aeroflot.nameOfFlightDestination);
		getline(fin, aeroflot.flightNumber);
		aeroflots.push_back(aeroflot);
	}
	
	for (auto aeroflot : aeroflots) {
		if (aeroflot.typeOfAircraft != typeOfAircraft) continue;
		cout << "Type of Aircraft: " << aeroflot.typeOfAircraft << '\n';
		cout << "Name of flight destination: " << aeroflot.nameOfFlightDestination << '\n';
		cout << "flight number: " << aeroflot.flightNumber << '\n';
	}

	fin.close();
	return 0;
}