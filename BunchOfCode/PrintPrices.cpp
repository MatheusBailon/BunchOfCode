//FILE: PrintPrices.cpp

#include <string>

using namespace std;

const string symbol = "$";
const int divisor = 1000;
const char decimalsymbol = '.';

string PrintPrices(double priceToBeConverted) {


	//Converting the integer value
	int integerValue = int (priceToBeConverted);
	string result = "";

	while (integerValue / divisor > 0) {
		int remainder = integerValue % divisor;
		string remainderText = to_string(remainder);
		int size = remainderText.size();
		remainderText = ("00" + remainderText)
						.substr(size - 1,3);

		result = ',' + remainderText + result;

		integerValue /= divisor;
	}

	result = to_string(integerValue) + result;

	//Convert the decimal value
	string wholeValue = to_string(priceToBeConverted);
	int commaPosition = wholeValue.find(decimalsymbol);

	return symbol + result + wholeValue.substr(commaPosition, 3);
}