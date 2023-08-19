#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	int TC; cin >> TC;
	while (TC--) {
		string data, key; cin >> data >> key;
		for (int i = 0; i <= data.size() - key.size(); i++) { key += key[i]; }
		for (int i = 0; i < data.size(); i++) { cout << char(data[i] ^ key[i]); }
		cout << '\n';
	}
return 0; }
