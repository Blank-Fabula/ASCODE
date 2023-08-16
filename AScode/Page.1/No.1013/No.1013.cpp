#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    int T; cin >> T;
    while (T--) {
        string id; cin >> id;
        cout << id[2] << id[3];
        cout << '\n';
    }
return 0; }
