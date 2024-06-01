#include <iostream>

// Function declaration
bool isVowel(char ch);

int main() {
    // Characters to test
    char characters[] = {'E', 'a', 'G', 'p', 'I', 'o', 'U'};

    // Test each character and print whether it is a vowel or not
    for (char c : characters) {
        std::cout << c << " is a vowel: " << isVowel(c) << std::endl;
    }

    return 0;
}

// Function to determine if a character is a vowel
bool isVowel(char c) {
    // Convert character to lowercase to simplify the comparison
    c = tolower(c);

    // Check if the character is a vowel
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
