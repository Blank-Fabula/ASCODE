#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    int T; cin >> T; cin.ignore();
    while (T--) {
        int alphaCnt[26] = { 0 };
        string alpha; getline(cin, alpha);
        for (int i = 0; i < alpha.size(); i++) { alphaCnt[alpha[i] - 'a']++; }
        for (int i = 0; i < 26; i++) {
            if (alphaCnt[i]) { cout << char(i + 'a') << ":" << alphaCnt[i] << '\n'; }
        } cout << '\n';
    }
return 0; }
