#include "./menu.h"
#include <iostream>
using namespace std;
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