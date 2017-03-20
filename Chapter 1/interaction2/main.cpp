#include <iostream>

/* const variable name */
#define PI 3.14159

int main()
{
    int x = 5;
    x = 10;
    const int y = 3;

    std::cout << "Enter circle radius: ";
    float radius;
    std::cin >> radius;

    float circle_area = PI * radius * radius;
    std::cout << "Area of circle " << circle_area << std::endl;

    return 0;
}
