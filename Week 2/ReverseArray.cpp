#include <iostream>
using namespace std;

void reverse(int *arr, int n) { for (int *i = arr, *j = arr + n - 1; i < j; i++, j--) swap(*i, *j); }

int main() {
    int n; cout << "Size: "; cin >> n;
    int arr[n]; for (int &x : arr) cin >> x;
    reverse(arr, n);
    for (int x : arr) cout << x << " ";
}
