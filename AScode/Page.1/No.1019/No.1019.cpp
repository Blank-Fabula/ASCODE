#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	char alpha[] = "BCDEFGHIJKLMNOPQRSTUVWXYZA";
	int TC; cin >> TC;
	while (TC--) {
		string str; cin >> str;
		for (int i = 0; i < str.size(); i++) {
			cout << alpha[str[i] - 'A'];
		} cout << '\n';
	}
return 0; }
