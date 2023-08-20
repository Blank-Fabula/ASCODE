#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	int day = 7, n;
	double result = 0;
	for (int i = 0; i < day && cin >> n; i++) { result += n; }
	cout << setprecision(2) << fixed << result / day;
return 0; }
