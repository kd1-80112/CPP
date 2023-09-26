#include <iostream>
using namespace std;
class cylinder
{
    double radius;
    double height;

public:
    cylinder()
    {
        this->radius = 0;
        this->height = 0;
    }
    cylinder(double radius, double height)
    {
        this->radius = radius;
        this->height = height;
    }

    double getRadius()
    {
        return this->radius;
    }
    double getHeight()
    {
        return this->height;
    }
    void setRadius(int radius)
    {
        this->radius = radius;
    }
    void setHeight(int height)
    {
        this->height = height;
    }
    double getvolume()
    {
        double volume = 3.14 * this->radius * this->height;
        return volume;
    }
    void printvolume()
    {

        cout << "voulme=" << getvolume() << endl;
    }
};

enum Emenu
{
    Exit = 0,
    printvolume = 1,
    setRadius = 2,
    setHeight = 3,
    getRadius = 4,
    getHeight = 5,
    getvolume = 6,

};
Emenu menu()
{
    int choice;
    cout << "----------------------" << endl;
    cout << "0:exit" << endl;
    cout << "1:printvolume" << endl;
    cout << "2:setRadius" << endl;
    cout << "3:setHeight" << endl;
    cout << "4:getRadius" << endl;
    cout << "5:getHeight" << endl;
    cout << "6:getvolume" << endl;
    cout << "----------------------" << endl;

    cout << "choice=";
    cin >> choice;
    return Emenu(choice);
}
int main()
{
    Emenu choice;
    cylinder c(3.5, 9.5);
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case printvolume:
            c.printvolume();
            cout << "----------------------" << endl;

            break;
        case setRadius:
            c.setRadius(5);
            c.printvolume();
            cout << "----------------------" << endl;

            break;
        case setHeight:
            c.setHeight(10);
            c.printvolume();
            cout << "----------------------" << endl;

            break;
        case getRadius:
            c.getRadius();

            c.printvolume();
            cout << "----------------------" << endl;

        case getHeight:
            c.getHeight();
            c.printvolume();
            cout << "----------------------" << endl;

            break;
        case getvolume:
            c.getvolume();
            c.printvolume();
            cout << "----------------------" << endl;

            break;
        case Exit:
            break;
        default:
            cout << "select in given " << endl;
            cout << "----------------------" << endl;

            break;
        }
    }
    cout << "out" << endl;
}