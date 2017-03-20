/* using input output stream library */
#include <iostream>

/* cout
    standard output, under (std) standard name space
    << is the insertion operator
    insert the string into the cout
*/

/* each c++ must need an entry point a main function */
int main () {
    std::cout << "Hello World!" << std::endl;
    /* endl adds new line to the end*/
    std::cout << 2016 << " is today's year." << std::endl;

    /* strict types for variables */
    bool test = true;
    /* unsigned is possitite only */
    unsigned int n = 10;

    int year, month = 3, day = 16;
    year = 2017;

    std::cout << "year is " << year << " month is " << month;
    /* unsigned short limites to 0 to 65536 in range */

    /* every function must return some value */
    /* the return will terminate the function */
    return 0;
}
