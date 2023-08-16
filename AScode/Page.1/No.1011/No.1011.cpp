#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    double X, Y; cin >> X >> Y;
    cout << X << ", " << Y << ", ";
    cout << setprecision(6) << fixed << X * Y / 2.0;
return 0; }
