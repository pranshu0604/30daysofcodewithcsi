#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(const std::string& str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (std::tolower(str[start]) != std::tolower(str[end])) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

bool isPalindrome(const std::string& str) {
    return isPalindrome(str, 0, str.length() - 1);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }
    return 0;
}