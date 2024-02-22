#include <iostream>
#include <string>

std::string removeDuplicates(const std::string& str) {
    std::string result = "";

    for (char c : str) {
        bool found = false;
        for (char rc : result) {
            if (rc == c) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += c;
        }
    }

    return result;
}

int main() {
    std::string str = "hello";
    std::cout << "Original string: " << str << std::endl;

    std::string result = removeDuplicates(str);

    std::cout << "String after removing duplicates: " << result << std::endl;

    return 0;
}
