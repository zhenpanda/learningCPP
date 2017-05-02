#include <iostream>

// void a special type of function
// the void function does not return a value
void Print(int n)
{
    // no return but good for working out logic
    for(int i = 1; i <=n; ++i)
        std::cout << "*";
    std::cout << std::endl;
}
void PrintMenu()
{
    std::cout << "1. addition\n";
    std::cout << "2. subtraction\n";
    std::cout << "3. divison\n";
    std::cout << "4. multiplication" << std::endl;
}

// declare it before the main function
int GetLastDigit(const int n);

// main is a function with a return type
// the base function of a c++ program
int main()
{
    /*
    while(true)
    {
        std::cout << "Enter number 0 for end: ";
        int num;
        std::cin >> num;
        if(num == 0)
            break;
        Print(num);
    }
    */

    /*
    std::cout << "Enter number 0 for end: ";
    int num;
    std::cin >> num;
    int last_digit = GetLastDigit(num);
    std::cout << last_digit << " is the modules." << std::endl;
    */

    /*
    int n1, n2;
    int choice;

    std::cout << "Enter number 1:";
    std::cin >> n1;
    std::cout << "Enter number 2:";
    std::cin >> n2;

    PrintMenu();
    std::cout << "Choose something:";
    std::cin >> choice;

    int result;
    if(choice == 1)
        result = n1 + n2;
    else if(choice == 2)
        result = n1 - n2;
    else if(choice == 3)
        result = n1 * n2;
    else if(choice == 4)
        result = n1 / n2;
    else
    {
        std::cout << "Error! Wrong choice" << std::endl;
        // return 1 is error have happened and breaking the program
        return 1;
    }
    std::cout << "The result is: " << result << std::endl;
    */

    //lambda function
    auto lambdal = []( int x )
    {
        return x * x * x;
    };

    int num = 10;
    int result = lambdal(num);

    auto lambda2 = []( int x, int y ) -> int
    {
        return x * y;
    };

    int result2 = lambda2(10, 5);

    std::cout << result2;
    return 0;
}

int GetLastDigit(const int n)
{
    //int result  = n % 10;
    //return result;
    return ( n%10 );
}
