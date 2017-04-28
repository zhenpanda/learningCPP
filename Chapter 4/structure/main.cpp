#include <iostream>
#include <cmath>
#include <stdexcept>

// user set varaible
struct Date
{
    int day;
    int month;
    int year;
};

struct Book
{
    int ID;
    std::string Name;
    std::string Author;
    // nested structs
    Date Published;
    // shared by all instance of varaibles Book
    static int Count;
};

// must resver some space in memory
// scope operator
int Book::Count;

int main()
{
    /*
    struct some_structure
    {
        attributes
    };
    */

    /*
    Date dt;

    std::cout << "Enter month: ";
    std::cin >> dt.month;

    std::cout << "Enter day: ";
    std::cin >> dt.day;

    std::cout << "Enter year: ";
    std::cin >> dt.year;

    std::cout << "Entered date: ";
    std::cout << dt.month << "/" << dt.day << "/" << dt.year << std::endl;
    */

    Book b1, b2;
    b1.ID = 0;
    b1.Name = "Random Name";
    b1.Author = "Random guy";
    b1.Count = 1;

    std::cout << b2.Count << std::endl;


    return 0;
}
