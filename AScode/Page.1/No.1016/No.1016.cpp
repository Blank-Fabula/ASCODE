#include <iostream>
#include <iomanip>
using namespace std;

#define FIX(N) setprecision(N) << fixed

int main(int argc, char** argv) {
	float Sp, T; cin >> Sp >> T;
	cout << FIX(3) << Sp << ' ' << T;
	cout << ' ' << FIX(2) << Sp * T;
return 0; }
