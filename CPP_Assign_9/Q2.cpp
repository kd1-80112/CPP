#include <iostream>
using namespace std;
enum account_type
{

    SSAVINGS = 1,
    CURRENT = 2,
    DMAT = 3

};
account_type accounttype()
{
    int choice;
    cout << "1.Savings" << endl;
    cout << "2.CURRENT" << endl;
    cout << "3.DMAT" << endl;
    cout << "choice=";
    cin >> choice;
    return account_type(choice);
}

class account
{
    int id;
    account_type type;
    double balance;

public:
    account() {}
    account(int id, account_type type)
    {
        this->id = id;
        this->type = type;
    }

    void accept()
    {
        cout << "enter id=";
        cin >> this->id;
        // cout << "account_type=";
        // this->type = account();
    }
};
int main()
{
    account a;
    a.accept();
}
