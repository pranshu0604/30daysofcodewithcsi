#include <iostream>
#include <string>

void reverseString(std::string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        std::swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    std::string str = "hello";
    std::cout << "Original string: " << str << std::endl;

    reverseString(str);

    std::cout << "Reversed string: " << str << std::endl;

    return 0;
}
