#include <iostream>

void rotateArray(int arr[], int size, int k) {
    k = k % size; 
    if (k < 0)
        k += size;

    int temp[k];
    for (int i = size - k, j = 0; i < size; ++i, ++j)
        temp[j] = arr[i];

    for (int i = size - 1; i >= k; --i)
        arr[i] = arr[i - k];

    for (int i = 0; i < k; ++i)
        arr[i] = temp[i];
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    std::cout << "Original array: ";
    printArray(arr, size);

    rotateArray(arr, size, k);

    std::cout << "Rotated array by " << k << " steps: ";
    printArray(arr, size);

    return 0;
}
