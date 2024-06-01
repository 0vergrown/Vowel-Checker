# Vowel Checker

The Vowel Checker is a simple C++ program that tests whether given characters are vowels or not. It's designed to help beginners understand basic programming concepts such as functions, loops, and conditional statements in C++.

## Features
- **Character Testing:** Determines if specific characters are vowels.
- **Supports Multiple Characters:** Checks a set list of characters and prints results for each.
- **Case Insensitivity:** Works with both uppercase and lowercase characters.

## How to Install and Run
To run the Vowel Checker, follow these steps:

### Prerequisites
Ensure you have a C++ compiler installed on your computer, such as GCC, Clang, or MSVC.

### Installation
1. **Clone the repository:**
   ```bash
   git clone https://github.com/yourusername/vowel-checker.git
   ```

2. **Navigate to the directory:**
   - **On Windows:**
     - Open Command Prompt and change directory:
       ```bash
       cd path\to\vowel-checker
       ```
   - **On macOS and Linux:**
     - Open Terminal and change directory:
       ```bash
       cd path/to/vowel-checker
       ```

### Compilation
Compile the program using a C++ compiler. For example, with GCC:
```bash
g++ main.cpp -o vowel-checker
```

### Running the Program
After compiling, run the program using:
```bash
./vowel-checker
```
The program will automatically print whether each predefined character is a vowel.

## How It Works
The program includes a predefined list of characters and uses a loop to pass each character to the `isVowel` function. This function checks if the character is a vowel ('a', 'e', 'i', 'o', 'u') by comparing it in both its uppercase and lowercase forms. The results are then printed to the console.

## Contributing
Contributions to this project are welcome. Enhancements could include:
- Expanding the list of testable characters.
- Adding a user input feature to allow live testing of any character.
- Implementing a graphical user interface for more interactive use.

## License
This project is licensed under the CC0 1.0 Universal License - see the [LICENSE](LICENSE) file for details.

## Why This Project Exists
The Vowel Checker was created as an educational tool to demonstrate basic programming concepts in C++. The project covers:
- **Functions:** How to create and use functions.
- **Control Structures:** Utilizing loops and conditionals to process data.
- **Character Handling:** Working with character data types and functions in C++.

This program provides a practical application of these concepts, helping new programmers see how basic elements of C++ work together in a real-world application.
