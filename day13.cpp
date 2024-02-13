#include <iostream>

using namespace std;

int main() {
    int arr[] = {5, 9, 2, 7, 3, 8, 1, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];
    int min = arr[0];
    int sum = arr[0];
    
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        sum += arr[i];
    }
    
    float average = (float)sum / n;
    
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    
    return 0;
}
