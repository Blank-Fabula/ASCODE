#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char** argv) {
    cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while (T--) {
        char alpha; cin >> alpha;
        if (isupper(alpha)) { cout << char(tolower(alpha));
        } else { cout << char(toupper(alpha)); }
        cout << '\n';
    }
return 0; }
