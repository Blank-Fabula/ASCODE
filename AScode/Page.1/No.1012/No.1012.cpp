#include <iostream>
using namespace std;

#define MIN 60
#define HOUR (MIN * 60)
#define DAY (HOUR * 24)

int main(int argc, char** argv) {
    int T; cin >> T;
    while (T--) {
        unsigned int second; cin >> second;
        cout << second / DAY << " day : ";
        cout << second % DAY / HOUR << " hour : ";
        cout << second % HOUR / MIN << " min : ";
        cout << second % MIN << " sec" << '\n';
    }
return 0; }
