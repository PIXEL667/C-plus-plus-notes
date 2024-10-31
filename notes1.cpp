#include <iostream>

int main()
{
    /*
    ^. '\n' or << std::endl : These two methods are used to print code in next line. If these aren't use output will be on same line
    */

    //! integer (whole number {can't store decimal}) e.g.:
    int x = 17;
    int y = 12; // Fixed: int type cannot store decimal, so 12.5 is incorrect.

    std::cout << x << '\n'; // output is 17
    std::cout << y << '\n'; // output is 12 (previously, it was incorrect due to 12.5)


    //! double (number including decimal) e.g.:
    double price = 12.5;
    double rate = 10.0; // Optional: best to keep decimal values for clarity with double.

    std::cout << price << '\n'; // output is 12.5
    std::cout << rate << '\n';  // output is 10.0


    //! char (stores only a single character) e.g.:
    char grade = 'A';
    //~ char course = 'BA'; // Error: a char can only store one character.
    char currency = '$';

    std::cout << grade << '\n'; // output is A
    //~ std::cout << course << '\n'; // Error: uncommenting this line will give an error.
    std::cout << currency << '\n'; // output is $


    //! boolean (stores value as true/false {true = 1 / fasle = 0 [it work on binary]} ) e.g.:
    bool student = true;
    bool power = false;
    bool Forsale = true;

    std::cout << student << '\n'; // output is 1 (true)
    std::cout << power << '\n';   // output is 0 (false)
    std::cout << Forsale << '\n'; // output is 1 (true)


    //! string (stores object that represents a sequence of text {can include number but treated diffrentely}) e.g.:
    std::string firstname = "Aryan ";
    std::string lastname = "Thakur";
    std::string day = "Monday";
    std::string Month_date_year = "MAY / 28 / 2007";

    std::cout << firstname ;
    std::cout << lastname << '\n' ;
    std::cout << day << '\n';
    std::cout << Month_date_year << '\n';
    
    return 0; // Indicate successful execution
}
