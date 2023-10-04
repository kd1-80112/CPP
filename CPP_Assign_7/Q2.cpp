#include <iostream>
using namespace std;
class product
{
protected:
    int id;
    string title;
    double price;
    string type;

public:
    virtual void acceptProduct() = 0;
    virtual void displayProduct() = 0;
    string gettype()
    {
        return this->type;
    }
    double getprice()
    {
        return this->price;
    }
};

class book : public product
{
private:
    string author;

public:
    book()
    {
        this->type = "B";
        cout << type << endl;
    }

    void acceptProduct()
    {
        cout << "enter book id=";
        cin >> this->id;
        cout << "enter book name=";
        cin >> this->title;
        cout << "enter book author=";
        cin >> author;
        cout << "enter book price=";
        cin >> this->price;
    }
    void displayProduct()
    {

        cout << "book id=" << this->id << endl;
        cout << "book name=" << this->title << endl;
        cout << "book author=" << this->author << endl;
        cout << "book price=" << this->price << endl;
    }
};
class tapes : public product
{
private:
    string artist;

public:
    tapes()
    {
        this->type = "T";
    }
    void acceptProduct()
    {
        cout << "enter tape id=";
        cin >> this->id;
        cout << "enter tape name=";
        cin >> this->title;
        cout << "enter tape artist=";
        cin >> this->artist;
        cout << "enter tape price=";
        cin >> this->price;
    }
    void displayProduct()
    {
        cout << "tape id=" << this->id << endl;
        cout << "tape name=" << this->title << endl;
        cout << "tape artist=" << this->artist << endl;
        cout << "tape price=" << this->price << endl;
    }
};

int menu()
{
    cout << "------------------------------------" << endl;
    cout << "0.Exit" << endl;
    cout << "1.accept book " << endl;
    cout << "2.accept tape" << endl;
    cout << "3.calculate bill" << endl;
    int choice;
    cout << "choice" << endl;
    cin >> choice;
    return choice;
}
void totalBill(product *p[], int index)
{

    int bookcount = 0;
    int tapecount = 0;
    double bookprice = 0;
    double tapeprice = 0;
    double totalprice = 0;

    for (int i = 0; i < index; i++)
    {
        if (p[i]->gettype() == "B")
        {
            bookprice = bookprice + p[i]->getprice();
        }
    }
    for (int i = 0; i < index; i++)
    {
        if (p[i]->gettype() == "T")
        {
            tapeprice = tapeprice + p[i]->getprice();
        }
    }
    totalprice = (bookprice - (0.10 * bookprice)) + (tapeprice - (0.05 * tapeprice));
    cout << "bookprice=" << bookprice << endl;
    cout << "tapeprice=" << tapeprice << endl;
    cout << "totalprice=" << totalprice << endl;

    for (int i = 0; i < index; i++)
    {
        delete p[i];
    }
}

int main()
{

    product *p[3];
    int choice;
    int index = 0;

    string type;
    while ((choice = menu()) != 0)
    {

        switch (choice)
        {

        case 0:
            cout << "exit";
            break;
        case 1:
            if (index < 3)
            {
                p[index] = new book();
                p[index]->acceptProduct();
                index++;
                break;
            }
        case 2:
            if (index < 3)
            {
                p[index] = new tapes();
                p[index]->acceptProduct();
                index++;
                break;
            }
            else
            {
                cout << "array is full" << endl;
                break;
            }
        case 3:

            cout << "calculate bill" << endl;
            cout << "*****************************" << endl;
            totalBill(p, 3);
            break;
        }
    }
}
