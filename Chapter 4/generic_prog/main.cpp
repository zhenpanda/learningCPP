#include <iostream>

/*
// declare functions
void Print(int arr[], int len);
//two function with same name can cause overload
void Print(double arr[], int len);
*/

//generic function, can take any type of data types in
template <typename TYPE>
void Print(TYPE arr[], int len)
{
    for(int i = 0; i <= len-1; ++i)
    {
        //std::cout << i << std::endl;
        std::cout << "[";
        std::cout << arr[i];
        std::cout << "]" << std::endl;
    }
    // the compilor creates the function after it's called
}


int main()
{
    // declare var
    int arr[] = {2,3,4,5};
    double arr01[] = {3.1, 4.5, 6.7};

    const int len = sizeof arr01 / sizeof arr01[0];
    Print(arr01, len);
    Print(arr, len);

    return 0;
}

/*
void Print(int arr[], int len)
{

    for(int i = 0; i <= len-1; ++i)
    {
        std::cout << i << std::endl;
        std::cout << "[";
        std::cout << arr[i];
        std::cout << "]" << std::endl;
    }

}
void Print(double arr[], int len)
{

    for(int i = 0; i <= len-1; ++i)
    {
        std::cout << i << std::endl;
        std::cout << "[";
        std::cout << arr[i];
        std::cout << "]" << std::endl;
    }

}
*/
