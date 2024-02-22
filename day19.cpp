#include <iostream>
#include <string>

int firstUniqChar(const std::string& str) {
    int count[256] = {0};

    for (char c : str) {
        count[c]++;
    }

    for (int i = 0; i < str.length(); ++i) {
        if (count[str[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    std::string str = "leetcode";

    int index = firstUniqChar(str);

    if (index != -1) {
        std::cout << index << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }

    return 0;
}
