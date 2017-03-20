#include <iostream>

int main()
{
    int n1,n2,n3,n4,n5;
    std::cout << "Enter five number, seperated by spaces: ";
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

    int sum = n1 + n2 + n3 + n4 + n5;
    /* int division will be int result and get trucated */
    float average = sum / 5.0f;

    std::cout << "Average value is " << average << std::endl;

    return 0;
}
