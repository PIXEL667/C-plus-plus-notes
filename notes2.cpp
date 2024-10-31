#include <iostream>

int main()
{
    /*
    ^ const:
    ! The const keyword specifies that a variable's value is constant.
    ! It tells the compiler to prevent anything from modifying it.
    ! (READ ONLY)
    */

    //~ double PI = 3.14159;
    //~ PI = 69; // This line would change PI if it weren't a constant.
    
    const double PI = 3.14159;
    //* As you can see, the PI value can be changed in double, but when we use const, it can't be changed.
    
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm"; // output is 62.8318 cm

    const int Light_speed = 299792458;
    const int Width = 1920;
    const int Height = 1080;

    //* Use const when a variable's value should remain the same at all times.
    return 0;
}
