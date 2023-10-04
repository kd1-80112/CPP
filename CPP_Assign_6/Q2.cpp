#include <iostream>
using namespace std;
class employee
{
protected:
    int id;
    float sal;

public:
    employee()
    {

        cout << "inside employee ctor" << endl;
        this->id = 0;
        this->sal = 0;
    }
    employee(int id, float sal)
    {
        cout << "inside para employee ctor" << endl;

        this->id = id;
        this->sal = sal;
    }
    int getid()
    {
        cout << "inside empid getter" << endl;
    }
    void accept_emp()
    {
        cout << "empid=";
        cin >> this->id;
        cout << "salary=";
        cin >> this->sal;
    }
    void display_emp()
    {
        cout << "empid=" << this->id << endl;
        cout << "salary=" << this->sal << endl;
    }
};
class manager : virtual public employee
{
private:
    float bonus;

public:
    manager()
    {
        cout << "inside manager ctor" << endl;
    }
    manager(int id, int sal, float bonus)
    {
        this->id = id;
        this->sal = sal;
        this->bonus = bonus;
    }
};
class salesman : virtual public employee
{
protected:
    float comm;

public:
    salesman()
    {
        cout << "inside salesman ctor" << endl;
    }
};
class sales_manager : public manager, public salesman
{

public:
    sales_manager()
    {
        cout << "inside sales_manager ctor" << endl;
    }
};

int main()
{
    sales_manager s1;
    employee e1(1, 1000);
}