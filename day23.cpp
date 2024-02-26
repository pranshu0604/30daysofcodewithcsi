#include <iostream>

int sumOfDigits(int n) {
    if (n < 10) {
        return n;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;
    std::cout << "Sum of digits: " << sumOfDigits(number) << std::endl;
    return 0;
}