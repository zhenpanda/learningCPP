#include <iostream>
#include <string>

int main()
{
    std::string mystring = " This is my number";

    int number;
    std::cout << "Enter an integer: ";

    /* method */
    /* extraction operator, accept from keyboard and store into number */
    std::cin >> number;
    int squared = number * number;
    std::cout << "Squard number is " << squared << std::endl;

    std::cout << "Squard number " << number << " is " << number * number << mystring << std::endl;

    return 0;
}
