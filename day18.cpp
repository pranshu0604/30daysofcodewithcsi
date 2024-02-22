#include <iostream>
#include <string>

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void countVowelsAndConsonants(const std::string& str, int& vowels, int& consonants) {
    vowels = 0;
    consonants = 0;

    for (char c : str) {
        if (isalpha(c)) {
            if (isVowel(c)) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
}

int main() {
    std::string str = "Hello World";
    std::cout << "Original string: " << str << std::endl;

    int vowels, consonants;
    countVowelsAndConsonants(str, vowels, consonants);

    std::cout << "Number of vowels: " << vowels << std::endl;
    std::cout << "Number of consonants: " << consonants << std::endl;

    return 0;
}
