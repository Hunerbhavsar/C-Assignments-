#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter the temperature: ";
    cin >> temp;

    if (temp >= 80)
        cout << "Recommended Activity: Swimming\n";
    else if (temp >= 60)
        cout << "Recommended Activity: Tennis\n";
    else if (temp >= 40)
        cout << "Recommended Activity: Golf\n";
    else
        cout << "Recommended Activity: Skiing\n";

    return 0;
}
