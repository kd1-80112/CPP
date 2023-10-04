#include <iostream>
using namespace std;
class date
{
private:
    int day;
    int month;
    int year;

public:
    date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    date(int day,
         int month,
         int year)
    {
        this->day = this->day;
        this->month = this->month;
        this->year = this->year;
    }
    int get_day()
    {
        return this->day;
    }
    void set_day(int day)
    {
        this->day = day;
    }
    int get_month()
    {
        return this->month;
    }
    void set_month(int month)
    {
        this->month = month;
    }
    int get_year()
    {
        return this->day;
    }
    void set_year(int year)
    {
        this->year = year;
    }

    void acceptdate()
    {
        cout << "enter day=";
        cin >> this->day;
        cout << "enter month=";
        cin >> this->month;
        cout << "enter year=";
        cin >> this->year;
    }
    void displaydate()
    {
        cout << "date=" << endl;
        cout << this->day << "/" << this->month << "/" << this->year << endl;
    }
    bool is_leap_year()
    {
        if (this->year / 4 != 0 and this->year / 400 != 0)
        {
            cout << "leap year";
        }
        return true;
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
    }
    person(string name, string addr, int day, int month, int year) : dob{day, month, year}
    {
        this->name = name;
        this->addr = addr;
        date dob;
    }
    string getname()
    {
        return this->name;
    }
    void setname(string name)
    {
        this->name = name;
    }
    string getaddr()
    {
        return this->addr;
    }
    void setaddr(string addr)
    {
        this->addr = addr;
    }
    date getdob()
    {

        dob.displaydate();
    }
    void setdob()
    {
        dob.acceptdate();
    }
    void acceptemp()
    {
        cout << "enter name=";
        cin >> this->name;
        cout << "enter addr=";
        cin >> this->addr;
        cout << "date of birth" << endl;
        dob.acceptdate();
    }
    void dispemp()
    {
        cout << "name=" << this->name << endl;
        cout << "addr=" << this->addr << endl;
        cout << "dob=";
        dob.displaydate();
        cout << endl;
    }
};
class employee : public person
{
    int id;
    float sal;
    string dept;
    date doj;

public:
    employee() {}

    employee(int id, float sal, string dept, int day, int month, int year) : doj{day, month, year}
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }
    int geid()
    {
        return this->id;
    }
    void setid(int id)
    {
        this->id = id;
    }
    int getsal()
    {
        return this->sal;
    }
    void setsal(float sal)
    {
        this->sal = sal;
    }
    string getdept()
    {
        return this->dept;
    }
    void setdept(string dept)
    {
        this->dept = dept;
    }
    date getdoj()
    {
        doj.displaydate();
    }
    void setdoj(date doj)
    {
        doj.acceptdate();
    }
    void accept()
    {
        acceptemp();
        cout << "enter doj" << endl;
        doj.acceptdate();
    }
    void display()
    {
        dispemp();
        doj.displaydate();
    }
};
int main()
{
    employee e;
    e.accept();
    e.display();
}