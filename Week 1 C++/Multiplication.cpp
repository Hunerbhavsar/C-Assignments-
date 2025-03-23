#include <iostream>
using namespace std;

int main() {
    int num1, den1, num2, den2;
    char slash;

    cout << "Enter first fraction (e.g., 1/2): ";
    cin >> num1 >> slash >> den1;
    cout << "Enter second fraction (e.g., 2/5): ";
    cin >> num2 >> slash >> den2;

    int numProduct = num1 * num2;
    int denProduct = den1 * den2;

    cout << "Product = " << numProduct << "/" << denProduct << endl;
    return 0;
}
