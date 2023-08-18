#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int price; cin >> price;
	int M500 = price / 500;
	int M100 = price % 500 / 100;
	int M10 = price % 100 / 10;
	cout << M500 << '\n' << M100 << '\n' << M10;
return 0; }
