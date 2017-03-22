#include <iostream>

int main()
{
    // int array with 10 elements
    int arr1[10];
    arr1[0] = 5;
    arr1[4] = 10;
    arr1[9] = 100;

    std::cout << arr1 << arr1[0] << std::endl;

    // memory representation of array
    /*
    ---------
    | 0 | 1 |
    ---------

    0x58432

    */

    // float array with 3 elements
    float arr2[3];

    // array init
    int arr3[5] = {1,2,3,4,5};

    // populate array
    /*
    int arr4[10] = {0};
    for(int i = 0; i < 10; ++i)
    {
        arr4[i] = i;
        std::cout << arr4[i] << std::endl;
    }
    std::cout << arr4[9] << std::endl;
    // size is not known during compile time
    // int num;
    // int arr1[num]
    // is not going to work

    // const value will work
    #define SIZE 20
    int arr5[SIZE];
    arr5[0] = 1111;
    std::cout << arr5[0];
    */

    const int noe = 3;
    int arr6[3];
    int MAX;

    for(int i = 0; i < noe; ++i)
    {
        std::cout << "Enter " << i + 1 << ". number: ";
        std::cin >> arr6[i];
        if(i==0)
        {
            MAX = arr6[i];
        }
        else if(arr6[i] > MAX)
        {
            MAX = arr6[i];
        }
    }
    std::cout << MAX << std::endl;

    // C strings
    char str[4] = {'A','B','C','\0'};
    std::cout << str << std::endl;

    return 0;
}
