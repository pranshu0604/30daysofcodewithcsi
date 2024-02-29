#include <iostream>
#include <string>
#include <unordered_map>

int lengthOfLongestSubstring(const std::string& s) {
    int maxLength = 0;
    int start = 0;
    int n = s.size();
    std::unordered_map<char, int> charMap;

    for (int end = 0; end < n; ++end) {
        if (charMap.find(s[end]) != charMap.end()) {
            start = std::max(start, charMap[s[end]] + 1);
        }
        charMap[s[end]] = end;
        maxLength = std::max(maxLength, end - start + 1);
    }

    return maxLength;
}

// Example usage:
int main() {
    std::string s = "abcabcbb";
    int length = lengthOfLongestSubstring(s);
    std::cout << "Length of the longest substring without repeating characters: " << length << std::endl;
    return 0;
}
