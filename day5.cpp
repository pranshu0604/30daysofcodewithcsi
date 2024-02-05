#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 10;
    std::cout << "Fibonacci series up to " << n << ":\n";

    for (int i = 0; i <= n; ++i) {
        std::cout << fibonacci(i) << " ";
    }

    return 0;
}
