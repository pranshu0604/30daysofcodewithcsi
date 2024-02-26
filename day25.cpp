#include <iostream>

int sumOfArray(const int arr[], int size) {
    if (size <= 0) {
        return 0;
    } else {
        return arr[size - 1] + sumOfArray(arr, size - 1);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Sum of elements in the array: " << sumOfArray(arr, size) << std::endl;
    return 0;
}