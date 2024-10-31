#include <iostream>
#include <vector> // Directive allows the use of the std::vector container in C++.

/*
^ Typedef and alias
! Typedef is a keyword that creates a new name (alias) for an existing data type.
! It improves code readability and helps avoid typos.
! Use it when it enhances code clarity or gives a more meaningful name.
! In modern C++, 'using' is preferred over 'typedef', especially with templates.
*/

typedef std::vector<std::pair<std::string, int>> pairlist_t; //? Alias for a vector of string-int pairs.
//* The data type has an alias called pairlist_t. The _t suffix typically indicates a type.

//& EASY example:
//? Uncomment the line below to use an alias for common data types.
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;
//* Works the same way as typedef.

int main() {
    //* Example usage: instead of <std::string firstname;>, we use <text_t firstname>:
    text_t firstname = "Aryan"; //? This variable behaves like a string.
    number_t age = 17;           //? This variable behaves like an integer.

    std::cout << firstname << '\n'; // Output: Aryan
    std::cout << age << '\n';       // Output: 17

    return 0;
}
