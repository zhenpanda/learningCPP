#include <iostream>

class DummyClass
{
    int dummy_attr1;
    char dummy_attr2;

    public:
        // constructor same as name of class
        // also init the private value of the object, you must use single quotes here
        DummyClass() : dummy_attr1(1), dummy_attr2('eee')
        {
            std::cout << "Hello world!" << std::endl;
        }
        // if param is set it changes how constructor is created
        DummyClass(int param)
        {
            std::cout << "2nd constructor here. Param = " << param << std::endl;
            this -> dummy_attr1 = param;
        }
        void Print() const
        {
            std::cout << dummy_attr1 << dummy_attr2 << std::endl;
        }
        // declare friend method
        friend int Add(DummyClass dc1, DummyClass dc2)
        {
            int result;
            result = dc1.dummy_attr1 + dc2.dummy_attr1;
            return result;
        }
        // destructors
        // The destructor is commonly used to "clean up" when an object is no longer necessary
        ~DummyClass()
        {
            std::cout << "Destructor has been called~!" << std::endl;
        }
};

// generic class
template <typename TYPE>
class DummyGeneric
{
    TYPE Attribute;
    public:
        DummyGeneric(TYPE Param) : Attribute(Param)
        {
        }
        TYPE GetAttribute() const
        {
            return this -> Attribute;
        }
        void SetAttribute(TYPE a)
        {
            this -> Attribute = a;
        }

};

int main()
{
    //constructor init classes
    //special code run when the user creates an instance of a class
    /*
        rule of zero: user does not define constructors
        rule of three: if we define a copy constructors, we need to define destructor
        rule of five: move constructor and operators?

    */

    // init will print mes to console
    DummyClass dc1(100), dc2(100);
    //DummyClass dc2(100);
    //dc.Print();

    int res = Add(dc1, dc2);
    std::cout << res << std::endl;

    // generic class declare post creating the class code
    // might create bad practices
    DummyGeneric<int> dummy_int(10);
    dummy_int.SetAttribute(5000);

    DummyGeneric<char> dummy_char('E');
    dummy_int.SetAttribute('P');

    return 0;
};
