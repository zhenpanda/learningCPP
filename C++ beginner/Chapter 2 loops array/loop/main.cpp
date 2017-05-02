#include <iostream>
#include <cmath>

int main()
{
    /*
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    int sum = 0;
    */
    // for loop
    /*
    for(int i = 1; i <= n; i++)
    {
        int number;
        std::cout << "Enter " << i << ". number: ";
        std::cin >> number;

        sum += number;
    }
    std::cout << "Sum of " << sum << " is sum." << std::endl;
    */

    // while loop
    /*
    int i = 1;
    while(i <= n)
    {
        int number;
        std::cout << "Enter " << i << ". number.";
        std::cin >> number;
        sum += number;
        i++;
    }
    std::cout << "Sum of " << sum << " is sum." << std::endl;
    */

    // do while
    /*
    int n;
    do
    {
        std::cout << "Enter a number n: ";
        std::cin >> n;

    }while(n <= 0);
    double sqrt_n = std::sqrt(n);

    std::cout << "sqrt (" << n << ") =" << sqrt_n << std::endl;
    */

    // for each
    /*
    int arr[] = {1,2,3,4,5};
    for(int i : arr)
    {
        std::cout << i << std::endl;
    }
    */

    // break
    /*
    int sum = 0;
    for(int i = 1; i <= 50; ++i)
    {
        int number;
        std::cout << "Enter a number: ";
        std::cin >> number;
        if(number == -1) break;
        sum+= number;
    }
    std::cout << "Sum is " << sum;
    */

    // continue
    /*
    for(int i =1; i <=20; ++i)
    {
        // skip the rest of the loop if continue is hit
        if(i%3!=0) continue;
        std::cout << i << std::endl;
    }
    */

    // goto "loop"
    int i = 1;
    AGAIN:
        std::cout << i << std::endl;
        ++i;
        if(i <= 20)
            goto AGAIN;

    return 0;
}
