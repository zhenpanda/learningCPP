#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <map>

//using namespace std;

int main()
{

    // vector represent arrays
    // dynamic but takes more memory

    // size of the vector is 10
    std::vector<int> vec1 (10);
    std::vector<double> vec2 (5);
    std::vector<int> vec3;

    // 3 elements sets to the number 7
    std::vector<int> vec4 (3,7);
    unsigned int vec1_size = vec1.size();

    for(int i=0; i<vec4.size(); ++i)
        std::cout << vec4[i] << " " << std::endl;

    int el = vec1.at(0); // vec1[0]

    bool emp1 = vec2.empty();
    bool emp2 = vec3.empty();

    std::cout << vec3.size() << std::endl;
    vec3.push_back(100);
    std::cout << vec3.size() << std::endl;

    // init the vector, print them
    std::vector<int> vec5 {5,4,3,2,1};
    vec5.pop_back();
    for(int i : vec5)
        std::cout << i << " " << std::endl;

    // deque
    // list of lists, not contious in memory
    std::deque<int> dq1 (10);
    std::deque<double> dq2 (5);
    std::deque<int> dq3;
    std::deque<int> dq4 (3,7);

    for(int i = 0;i < dq4.size(); ++i)
        std::cout << dq4[i] << " ";

    int el2 = dq1.at(0);
    bool emp3 = dq2.empty();
    bool emp4 = dq3.empty();

    std::cout << std::endl << dq3.size() << std::endl;
    dq3.push_back(100);
    std::cout << std::endl << dq3.size() << dq3.at(0) << std::endl;

    /*
    std::deque<int> dq5 {1,2,3};
    // pop remove from front, pop_back remove from back
    dq5.pop_back();
    for(int i : dq5)
        std::cout << i << " " << std::endl;

    // string in c++
    std::string s1 = "Hey";
    std::cout << s1 << std::endl;

    std::string s3;

    unsigned int s1_size = s1.size();
    std::cout << s1_size << std::endl;


    char c1 = s1[0];
    char c2 = s1.at(0);
    std::cout << c1 << " " << c2 << std::endl;

    // string concatenation, does mutate the state
    s1 += "haha";
    std::cout << s1 << std::endl;
    std::string s4 = s1 + ", boom";
    std::cout << s4 << std::endl;

    // input into string
    std::string s6;

    //std::cin >> s6;ry
    //std::cout << s6 << std::endl;

    // full line input
    std::getline(std::cin, s6);
    std::cout << s6 << std::endl;
    */

    // map has a key value pair
    std::map<int, std::string> numbers;
    numbers[0] = "Zero";
    numbers[1] = "One";

    bool emp = numbers.empty();
    auto it = numbers.find(222);
    if( it == numbers.end() )
        std::cout << "no key" << numbers.at(1) << std::endl;
    else
        std::cout << "key found" << std::endl;

    std::map<int, std::string> Days
    {
        {1,"monday"},
        {2, "Tuesday"}
    };

    for(int i = 0; i <= 2; ++i)
        std::cout << Days[i] << std::endl;

    return 0;
}
