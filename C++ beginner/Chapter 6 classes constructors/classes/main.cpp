#include <iostream>

// creating a class
class Date
{
    // private, hidden data, not visable outside of the class
    int day;
    int month;
    int year;
    // most set things to public to have access to it
    public:
        // method to set the data on the instance of the Data class
        void SetDate(int d, int m, int y)
        {
          // setting the instance of the class
          this -> day = d;
          this -> month = m;
          this -> year = y;
        };
        // const and does not mutate the state of the instance
        void Print() const
        {
            std::cout << this -> month << "/" << this -> day << "/" << this -> year << std::endl;
        };
        int GetDay() const
        {
            return this -> day;
        }
        // setters
        void SetDay(int d) {this->day = d;};
        void SetMonth(int m) {this->month = m;};
        void SetYear(int y) {this->year = y;};

};

int main()
{
    // create an instance of the class
    Date dt;
    //dt.day = 10;
    dt.SetDate(12,6,1993);
    dt.Print();

    /*
    int d, m, y;
    std::cout << "Enter a date:";
    std::cin >> m >> d >> y;
    Date dt1;
    dt1.SetDate(m, d, y);
    dt1.Print();
    std::cout << "Month: " << dt1.GetDay();
    */

    dt.SetMonth(3);
    dt.SetDay(15);
    dt.SetYear(1998);
    dt.Print();

    return 0;
}
