#include <iostream>
using namespace std;
class date
{
    int day;
    int month;
    int year;

public:
    date()
    {
        cout << "date ctor" << endl;
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void accept_date()
    {
        cout << "enter day=";
        cin >> day;
        cout << "enter month=";
        cin >> month;
        cout << "enter year=";
        cin >> year;
    }
    void display_date()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};
class employee
{
    int id;
    float sal;
    string dept;
    date doj;

public:
    employee()
    {
        cout << "employee ctor" << endl;
    }

    employee(int id, float sal, string dept, int day, int date, int year) : doj(day, date, year)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }
    void accept_emp()
    {
        cout << "------------------" << endl;

        cout << "enter empid=";
        cin >> this->id;
        cout << "enter sal=";
        cin >> this->sal;
        cout << "enter dept=";
        cin >> this->dept;
        cout << "enter doj=";
        cout << endl;
        doj.accept_date();
    }
    void disply_emp()
    {
        cout << "------------------" << endl;
        cout << "empid=" << this->id << endl;
        cout << "sal=" << this->sal << endl;
        cout << "dept=" << this->dept << endl;
        cout << "doj" << endl;
        doj.display_date();
    }
};
class person
{
    string name;
    string addr;
    date dob;

public:
    person()
    {
        cout << "inside person ctor" << endl;
    }
    person(string name, string addr, int day, int month, int year) : dob(day, month, year)
    {

        this->name = name;
        this->addr = addr;
    }
    void accept_per()
    {
        cout << "------------------" << endl;

        cout << "enter name=";
        cin >> this->name;
        cout << "enter address=";
        cin >> this->addr;
        cout << "enter doj=";
        dob.accept_date();
    }
    void disp_per()
    {
        cout << "------------------" << endl;
        cout << " name=" << this->name << endl;
        cout << "address=" << this->addr << endl;
        cout << " dob=";
        dob.display_date();
    }
};
int main()
{
    employee e(1, 1000, "E1", 1, 1, 2023);
    e.disply_emp();

    person p("P1", "xyz", 1, 1, 1990);
    p.disp_per();

    date d(05, 05, 1999);
    e.accept_emp();
    e.disply_emp();
    p.accept_per();
    p.disp_per();
}