#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int num) {
    return (num == 0) ? 1 : log10(abs(num)) + 1;
}

int main() {
    int num1, num2, product;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    product = num1 * num2;
    cout << "Product - " << product << endl;
    cout << "Count of digits - " << countDigits(product) << endl;

    return 0;
}
