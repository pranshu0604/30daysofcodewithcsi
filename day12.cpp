#include <iostream>

using namespace std;

int missingNumber(int arr[], int n) {
    int total = (n * (n + 1)) / 2;
    for (int i = 0; i < n; ++i) {
        total -= arr[i];
    }
    return total;
}

int main() {
    int arr[] = {3, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Missing number is: " << missingNumber(arr, n) << endl;
    return 0;
}
