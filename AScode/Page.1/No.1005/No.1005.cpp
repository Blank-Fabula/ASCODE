#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    cin.tie(NULL); cout.tie(NULL);
    int TC; cin >> TC;
    while (TC--) {
        int T, C; cin >> T >> C;
        vector<int> alpha(C);
        for (int i = 0; i < C; i++) { cin >> alpha[i]; }
        for (int i = 1; i <= T; i++) {
            for (int j = 0; j < C; j++) {
                if (i % alpha[j] == 0) { cout << char(j + 'A'); }
            }
        } cout << '\n';
    }
return 0; }
