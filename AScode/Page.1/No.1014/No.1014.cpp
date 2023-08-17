#include <iostream>
using namespace std;

int main(int argc, char** argv) {
int sum = 0, day = 1;
for (int num; cin >> num; day++) {
sum += num;
int c; c = cin.get();
if (c == EOF) { break; }
} cout << sum / day;
return 0; }
