#include "./menu.h"
#include "./cylinder.h"
#include <iostream>
using namespace std;

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