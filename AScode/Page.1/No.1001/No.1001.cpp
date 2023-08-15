#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(int argc, char** argv) {
    cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while (T--) {
        string words; cin >> words;
        string upperWords = words;
        for (char& c : upperWords) { c = toupper(c); }
        int len = words.length();
        stack<int> cnt;
        for (int i = 0; i < len - 3; i++) {
            if (upperWords.find("CHAR", i) == i) { cnt.push(i); }
        }
        if (cnt.size() >= 2) {
            for (; !cnt.empty(); cnt.pop()) { words.erase(cnt.top(), 4); }
            len = words.length();
            if (!len) { cout << "I Hate CharChar!";
            } else { cout << words; }
        } else { cout << words; }
        cout << '\n';
    }
return 0; }
