#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    cin.tie(NULL); cout.tie(NULL);
    int TC; cin >> TC;
    while (TC--) {
        int T; cin >> T;
        int A, B, C; cin >> A >> B >> C;
        for (int i = 1; i <= T; i++) {
            if (i % A == 0) { cout << "A"; }
            if (i % B == 0) { cout << "B"; }
            if (i % C == 0) { cout << "C"; }
        } cout << '\n';
    }
return 0; }
