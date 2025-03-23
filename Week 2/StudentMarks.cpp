#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, choice;
    cout << "Students: "; cin >> n;
    vector<int> marks(n);
    
    while (true) {
        cout << "1.Enter 2.Avg 3.High/Low 4.Exit: "; cin >> choice;
        if (choice == 4) break;
        if (choice == 1) for (int &m : marks) cin >> m;
        else if (choice == 2) cout << "Avg: " << accumulate(marks.begin(), marks.end(), 0) / n << endl;
        else if (choice == 3) cout << "High: " << *max_element(marks.begin(), marks.end()) << " Low: " << *min_element(marks.begin(), marks.end()) << endl;
    }
}
