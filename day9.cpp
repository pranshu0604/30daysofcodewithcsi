#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int target = 15;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, n, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    return 0;
}
