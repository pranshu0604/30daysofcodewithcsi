#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array

    // Calculate the size of the array
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    // Print the array elements
    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < arrSize; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
