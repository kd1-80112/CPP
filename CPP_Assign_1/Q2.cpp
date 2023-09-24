// Using structures
/*
#include <iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
    void initDate()
    {
        day = 0;
        month = 0;
        year = 0;
    }
    void printDateOnConsole()
    {
        // cout << "day=" << day << endl;
        // cout << "month=" << month << endl;
        // cout << "year=" << year << endl;
        cout << "date=" << day << ":" << month << ":" << year << endl;
    }
    void acceptDateFromConsole()
    {
        cout << "enter day=";
        cin >> day;
        cout << "enter month=";
        cin >> month;
        cout << "enter year=";
        cin >> year;
    }
    bool isLeapYear(struct Date d)
    {
        if ((d.year % 4 == 0) and (d.year % 400 == 0))
        {

            cout << year << " is leap year" << endl;
            return true;
        }
        else
        {
            cout << year << "  is not leap year" << endl;
            return false;
        }
    }
};

enum Edate
{
    Exit = 0,
    initial_date,
    accept_date,
    show_date,
    is_leap_year
};

Edate menu()
{
    int choice;
    cout << "----------------" << endl;
    cout << "0:exit" << endl;
    cout << "1:initial_date" << endl;
    cout << "2:ccept_date" << endl;
    cout << "3:show_date" << endl;
    cout << "4: is_leap_year" << endl;
    cout << "-------------------" << endl;
    cout << "choice=";
    cin >> choice;
    return Edate(choice);
}

int main()
{
    struct Date d;

    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case initial_date:
            d.initDate();
            d.printDateOnConsole();
            break;
        case accept_date:
            d.acceptDateFromConsole();
            d.printDateOnConsole();
            break;

        case show_date:
            d.printDateOnConsole();
            break;
        case is_leap_year:
            d.isLeapYear(d);
            break;
        default:
            cout << "out" << endl;
        }
    }
}
*/

// using class:
#include <iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    void printDateOnConsole()
    {
        // cout << "day=" << day << endl;
        // cout << "month=" << month << endl;
        // cout << "year=" << year << endl;
        cout << "date=" << this->day << ":" << this->month << ":" << this->year << endl;
    }
    void acceptDateFromConsole()
    {
        cout << "enter day=";
        cin >> this->day;
        cout << "enter month=";
        cin >> this->month;
        cout << "enter year=";
        cin >> this->year;
    }
    bool isLeapYear()
    {
        if ((this->year % 4 == 0) and (this->year % 400 == 0))
        {

            cout << year << " is leap year" << endl;
            return true;
        }
        else
        {
            cout << year << "  is not leap year" << endl;
            return false;
        }
    }
};

enum Edate
{
    Exit = 0,
    initial_date,
    accept_date,
    show_date,
    is_leap_year
};

Edate menu()
{
    int choice;
    cout << "----------------" << endl;
    cout << "0:exit" << endl;
    cout << "1:initial_date" << endl;
    cout << "2:ccept_date" << endl;
    cout << "3:show_date" << endl;
    cout << "4: is_leap_year" << endl;
    cout << "-------------------" << endl;
    cout << "choice=";
    cin >> choice;
    return Edate(choice);
}

int main()
{
    class Date d;

    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case initial_date:
            d.initDate();
            d.printDateOnConsole();
            break;
        case accept_date:
            d.acceptDateFromConsole();
            d.printDateOnConsole();
            break;

        case show_date:
            d.printDateOnConsole();
            break;
        case is_leap_year:
            d.isLeapYear();
            break;
        default:
            cout << "out" << endl;
        }
    }
}
