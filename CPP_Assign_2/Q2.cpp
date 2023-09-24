#include <iostream>
using namespace std;
class Address
{
    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {
        cout << "inside constructor" << endl;
    }
    Address(string building, string street, string city, int pin)
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }
    void accept()
    {
        cout << "enter building=";
        cin >> this->building;
        getchar();
        cout << "enter street=";
        getline(cin, this->street);
        cout << "city=";
        cin >> this->city;
        cout << "pin=";
        cin >> this->pin;
    }
    void display()
    {
        cout << "building=" << this->building << endl;
        cout << "street=" << this->street << endl;
        cout << "city=" << this->city << endl;
        cout << "pin=" << this->pin << endl;
    }
    string get_building()
    {
        return this->building;
    }
    string get_street()
    {
        return this->street;
    }
    string get_city()
    {
        return this->city;
    }
    int get_pin()
    {
        return this->pin;
    }

    void set_building(string building)
    {
        this->building = building;
    }
    void set_street(string street)
    {
        this->street = street;
    }
    void set_city(string city)
    {
        this->city = city;
    }
    void set_pin(int pin)
    {
        this->pin = pin;
    }
};

int main()
{
    Address a1;
    a1.accept();
    a1.display();
    cout << "----------------" << endl;
    a1.set_building("b1");
    a1.set_street("s1");
    a1.set_city("c1");
    // a1.display();
    // a1.get_building();
    // a1.get_street();
    // a1.get_city();
    // a1.get_pin();

    cout << "address= " << a1.get_building()
         << a1.get_street() << a1.get_city() << a1.get_pin() << endl;
    cout << "--------------------" << endl;

    Address a2("b2", "s2", "c2", 2);
    // a2.accept();
    a2.display();
    a2.set_building("b3");
    a2.set_street("s3");
    a2.set_city("c3");
    a2.display();
    cout << "--------------------" << endl;
    cout << "address= " << a2.get_building()
         << a2.get_street() << a2.get_city() << a2.get_pin() << endl;
}