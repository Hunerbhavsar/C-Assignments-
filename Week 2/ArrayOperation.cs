#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr; int choice, x;
    while (true) {
        cout << "1.Insert 2.Delete 3.Search 4.Display 5.Sort 6.Exit: "; cin >> choice;
        if (choice == 6) break;
        if (choice == 1) { cin >> x; arr.push_back(x); }
        else if (choice == 2) { cin >> x; arr.erase(remove(arr.begin(), arr.end(), x), arr.end()); }
        else if (choice == 3) { cin >> x; cout << (find(arr.begin(), arr.end(), x) != arr.end() ? "Found\n" : "Not Found\n"); }
        else if (choice == 4) { for (int i : arr) cout << i << " "; cout << endl; }
        else if (choice == 5) sort(arr.begin(), arr.end());
    }
}
