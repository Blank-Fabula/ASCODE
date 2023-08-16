#include <iostream>
using namespace std;

#define min 60
#define hour (min * 60)
#define day (hour * 24)
int main(int argc, char** argv) {
	int T; cin >> T;
	while (T--) {
		unsigned int second; cin >> second;
		cout << second / day << " day : ";
		cout << second % day / hour << " hour : ";
		cout << second % hour / min << " min : ";
		cout << second % min << " sec" << '\n';
	}
return 0; }
