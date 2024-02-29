#include <iostream>
#include <unordered_map>
#include <string>

int romanToInt(std::string s) {
    std::unordered_map<char, int> romanValues = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;
    int n = s.size();

    for (int i = 0; i < n; ++i) {
        if (i < n - 1 && romanValues[s[i]] < romanValues[s[i + 1]]) {
            result -= romanValues[s[i]];
        } else {
            result += romanValues[s[i]];
        }
    }

    return result;
}

// Example usage:
int main() {
    std::string romanNumeral = "MCMXCIV";
    int result = romanToInt(romanNumeral);
    std::cout << "Integer value of Roman numeral " << romanNumeral << " is: " << result << std::endl;
    return 0;
}
