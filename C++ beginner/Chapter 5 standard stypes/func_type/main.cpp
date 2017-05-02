#include <iostream>
#include <functional>
#include <cmath>

// function as a type
double Calculate(std::function<double(double)> f, double x);

// passing function into functions
double Calculate(std::function<double(double)> f, double x)
{
    double y = f(x) * f(x) * f(x);
    return y;
}
// function that will get passed in
double TestFun(double x)
{
    return x - 1;
}

int main()
{

    double a = Calculate(TestFun, 5);
    std::cout << a << std::endl;

    //lambda function, f is holding the lambda function
    //kind of like in line function
    std::function<int(int,int)> f = [] (int a, int b) -> int {return a*b;};
    int res = f(11,2);
    std::cout << res << std::endl;


    return 0;
}
