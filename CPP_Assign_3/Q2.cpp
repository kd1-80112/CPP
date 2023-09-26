#include <iostream>
using namespace std;
class tollbooth
{
    int paidcars;
    int unpaidcars;
    double amount;

public:
    tollbooth()
    {
        paidcars = 0;
        unpaidcars = 0;
        amount = 0;
    }
    void payingcars()
    {
        this->paidcars += 1;
        cout << "paidcars=" << this->paidcars << endl;
    }
    void nopaycars()
    {
        this->unpaidcars += 1;
        cout << "unpaidcars=" << this->unpaidcars << endl;
    }
    int countpaidcars()
    {
        int count = this->paidcars;
        return count;
    }
    int countunpaidcars()
    {
        int count = this->unpaidcars;
        return count;
    }
    void printonconsole()
    {
        int total = countpaidcars() + countunpaidcars();
        this->amount = countpaidcars() * 0.50;
        cout << "total=" << total << endl;
        cout << "amout=" << this->amount << endl;
        cout << "paidcars=" << countpaidcars() << endl;
        cout << "unpidcars=" << countunpaidcars() << endl;
    }
};
enum Emenu
{
    Exit = 0,
    payingcars = 1,
    nopaycars = 2,
    printonconsole = 3

};
Emenu menu()
{
    int choice;
    cout << "----------------------" << endl;
    cout << "0:exit" << endl;
    cout << "1:payingcars" << endl;
    cout << "2:nopaycars" << endl;
    cout << "3:printonconsole" << endl;

    cout << "choice=";
    cin >> choice;
    return Emenu(choice);
}
int main()
{
    tollbooth t;

    Emenu choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {

        case payingcars:
            t.payingcars();
            cout << "----------------------" << endl;

            break;
        case nopaycars:
            t.nopaycars();
            cout << "----------------------" << endl;

            break;

        case printonconsole:
            t.printonconsole();
            cout << "----------------------" << endl;

            break;

        case Exit:
            cout << "----------------------" << endl;

            break;
        default:
            cout << "select in given " << endl;
            cout << "----------------------" << endl;

            break;
        }
    }
    cout << "out " << endl;
    return 0;
}