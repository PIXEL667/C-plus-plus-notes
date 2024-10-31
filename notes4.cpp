#include <iostream>
#include <vector>  // Directive allows the use of the std::vector container in C++.

/*
^. Typedef and alias
!. Reserved keywords used to create an additional name (alias) for another data type.
!. Provides a new identifier for an existing type.
!. Helps with readability and reduces typos.
*/

typedef std::vector<std::pair<std::string, int>> pairlist_t; //? Creates an alias for a vector of string-int pairs.
//* The data type has an alias called pairlist_t. The _t suffix typically indicates a type.

//& EASY example:

typedef std::string text_t;
typedef int number_t;

int main()
{
    //* Instead of saying: <std::string firstname;> we can use the new identifier: <text_t firstname> e.g.:
    text_t firstname = "Aryan"; //? This variable behaves exactly like a string.
    number_t age = 17; //? This variable behaves exactly like an integer.

    std::cout << firstname << '\n'; // Output: Aryan
    std::cout << age << '\n'; // Output: 17

    return 0;
}
