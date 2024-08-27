
# Suffix Finder Project

## Overview

This project implements a function in C that finds and prints all suffixes of a given string that start with a specified character. The program reads a character and a string from the user, identifies all suffixes of the string that start with the given character, prints each suffix on a new line, and returns the number of suffixes found.

## Project Structure

The project is composed of the following files:

- **my_suffix.c**: Contains the implementation of the `suffix` function and the `main` function, which handles user input and output.
- **makefile**: A makefile to compile the project.

## Functionality

### `int suffix(char c, char str[])`

This function finds and prints all suffixes of the string `str` that start with the character `c`:

1. **Suffix Identification**: The function scans the string `str` for occurrences of the character `c`. For each occurrence, it prints the suffix of the string starting from that position.
   
2. **Return Value**: The function returns the number of suffixes found that start with `c`. If no suffix is found, the function returns `0`.

### `main()`

The `main` function reads a single character and a string from the user, calls the `suffix` function with these inputs, and then prints a message indicating the number of suffixes found.

### Example Usage

```bash
./my_suffix
```

The program will prompt the user for input and then output the results.

### Input

- A single character `c`.
- A string `str` with a maximum length of 127 characters (excluding the null terminator).

### Output

- All suffixes of `str` that start with `c`, each printed on a new line.
- The total number of such suffixes.

## Compilation Instructions

To compile the program, navigate to the directory containing the source files and `Makefile`. Run the following command:

```bash
make
```

This command compiles the program and generates an executable file.

## Example Execution

```bash
./my_suffix
```

### Sample Input

```text
Please enter a character: b
Please enter a string: abrahmrnsbre
```

### Sample Output

```text
Suffixes starting with 'b':
brahmrnsbre
bre
Number of suffixes found: 2
```

## Conclusion

This project demonstrates a simple and efficient approach to finding and printing suffixes of a string that start with a given character. The program effectively handles input, processes the string, and provides clear and concise output.

