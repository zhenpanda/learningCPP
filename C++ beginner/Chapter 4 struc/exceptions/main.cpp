#include <iostream>
#include <cmath>
#include <stdexcept>

//using namespace std;

double Sqrt(double x)
{
    if(x<0)
       throw "Negative number~!";
    double sroot = std::pow(x, 0.5);
    return sroot;
}

void something(int n)
{
    double square_root;
    if(n == 0)
        throw 1;
    if(n == -1)
        throw "c";
    if(n < 0)
        throw std::domain_error("some std exception");
}

int main()
{
    double num;
    std::cout << "Enter number:";
    std::cin >> num;
    double square_root;

    try
    {
        something(num);
        square_root = Sqrt(num);
    }
    catch(const char c)
    {
        //std::cout << "ERROR: " << text << std::endl;
        //return 1;
        std:: cout << "Caught: CHAR " << std::endl;
    }
    catch(const char i)
    {
        std::cout << "Caught: INT" << std::endl;
    }
    catch(const char *text)
    {
        std::cout << "Caught text: " << text << std::endl;
    }
    catch(std::domain_error de)
    {
        // .what prints out the exception message
        std::cout << "Caught the domain_error with text: " << de.what() << std::endl;
    }

    std::cout << "Sqrt root is " << square_root << std::endl;

    return 0;

}

/*
throw "Negative numbers are not allowed";
throw 0;
throw std::domain_error("Negative numbers are not allowed");
throw std::exception("Negative numbers are not allowed");
*/



