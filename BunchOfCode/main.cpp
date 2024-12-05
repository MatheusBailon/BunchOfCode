//FILE: main.cpp

#include <iostream>
#include "house.h"
#include <vector>
#include "CalcAverage.h"
#include "PrintPrices.h"

using namespace std;

int main() {
	vector<house> neighbourhood;
	vector<double> amountOfPrices;
	vector<double> amountOfRents;
	int propertiesQuantity;

	cout << "Inform the number of houses in your neighbourhood: ";
	cin >> propertiesQuantity;
	for (int i = 0; i < propertiesQuantity; i++) {

		cout << "\nTell us detal of the house " << i + 1 << "\n";
		house h;
		cout << "Property Price: ";
		cin >> h.propertyPrice;
		cin.ignore();

		cout << "Rent price (even if it is not available for rent): ";
		cin >> h.rent;
		cin.ignore();

		cout << "Owner's name: ";
		getline(cin,h.owner);

		cout << "completion date: ";
		cin >> h.yearCreation;
		cin.ignore();

		neighbourhood.push_back(h);
	}

	for (auto house : neighbourhood) {
		amountOfPrices.push_back(house.propertyPrice);
		amountOfRents.push_back(house.rent);
	}

	double pricesAvg = Average(amountOfPrices);
	double rentAvg = Average(amountOfRents);

	cout << "\n\n*** RESULTS *** \n\n";
	cout << "The average of houses PRICES on this neighbourhood is: "
		<< PrintPrices(pricesAvg) << "\n";

	cout << "The average of RENT on this neighbourhood is: "
		<< PrintPrices(rentAvg) << "\n";

	return 0;
}