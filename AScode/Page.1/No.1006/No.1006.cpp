#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int T; cin >> T; getchar();
    while (T--) {
        int alphaCnt[26] = { 0 };
        for (; ;) {
            char alpha = getchar();
            if (alpha == '\n' || alpha == EOF) { break; }
            alphaCnt[alpha - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (alphaCnt[i]) { cout << char(i + 'a') << ":" << alphaCnt[i] << '\n'; }
        } cout << '\n';
    }
return 0; }
