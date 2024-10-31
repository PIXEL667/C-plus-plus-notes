#include <iostream>

int main()
{
    /*
    ^.const :
    !.The const keyword specifies that a variable's values is constant
    !.Tells the compiler to prevent anything from modifing it
    !.(READ ONLY)
    */

    double pi = 3.14159;
    pi = 420.69;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm";

    return 0;
}