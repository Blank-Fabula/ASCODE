#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    float sum = 0;
    for (int i = 0; i < 6; i++) {
        int N; cin >> N;
        sum += N;
    } cout << fixed << setprecision(4) << sum / 6;
return 0; }
