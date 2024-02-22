#include <iostream>
#include <string>

std::string toggleCase(const std::string& str) {
    std::string result = str;
    for (char& c : result) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
    return result;
}

int main() {
    std::string str = "Hello World";
    std::cout << "Original string: " << str << std::endl;

    std::string toggled = toggleCase(str);

    std::cout << "String after toggling case: " << toggled << std::endl;

    return 0;
}
