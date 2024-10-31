#include <iostream>

/*
 ^ Namespace
 ! Provides a solution for preventing name conflicts in large projects.
 ! Each entity needs a unique name.
 ! A namespace allows for identically named entities as long as the namespaces are different.
 */

namespace first
{
    int x = 1; // Variable x in the first namespace
}

namespace second
{
    int x = 2; // Variable x in the second namespace
}

int main()
{

    //? Uncomment the line below to use the first namespace directly

    //^. using namespace first;

    //* If I use 'using namespace first;', then x will refer to the value 1
    //* This means I don't have to write:
    //~ std::cout << first::x;

    //* Instead, I can just use:
    //~ std::cout << x; // This will give an error if there is also an x in main()

    //* If I declare a variable x in main like this:
    //~ int x = 0; // This will shadow the x from namespace first if 'using namespace first;' is active

    //* Accessing x from the second namespace
    std::cout << "Value of x from second namespace: " << second::x << '\n'; // Output: 2
    std::cout << "Value of x from first namespace: " << first::x << '\n';   // Output: 1

    return 0;
}
