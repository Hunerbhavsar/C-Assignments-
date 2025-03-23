#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num1 = 45.6789;
    double num2 = 0.00034567;
    int num3 = 255;
    double num4 = 987.654321;
    double num5 = -123.456;

    cout << fixed << right << setw(10) << setprecision(3) << num1 << endl;
    cout << scientific << setprecision(6) << num2 << endl;
    cout << uppercase << hex << num3 << endl;
    cout << fixed << setprecision(4) << num4 << endl;
    cout << scientific << setprecision(4) << num5 << endl;

    return 0;
}
