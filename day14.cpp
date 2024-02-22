#include <iostream>

int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 5, 6, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int target = 5;
    int occurrences = countOccurrences(arr, size, target);
    std::cout << "Number of occurrences of " << target << ": " << occurrences << std::endl;
    return 0;
}
