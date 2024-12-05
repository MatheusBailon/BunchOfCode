//FILE: CalcAverage.cpp

#include <vector>

using namespace std;

double Average(vector<double> numbers) {
	double sum=0;

	for (auto n: numbers) {
		sum += n;
	}

	return sum/numbers.size();
}