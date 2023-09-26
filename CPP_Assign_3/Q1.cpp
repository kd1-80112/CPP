#include <iostream>
using namespace std;
class volume
{
    int length;
    int width;
    int height;

public:
    volume(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }
    void accept()
    {
        cout << "enter length=";
        cin >> this->length;
        cout << "enter width=";
        cin >> this->width;
        cout << "enter height=";
        cin >> this->height;
    }
    void display()
    {
        cout << "-----------------------------" << endl;
        cout << "length=" << this->length << endl;
        cout << "width=" << this->width << endl;
        cout << "height=" << this->height << endl;
        cout << "volume=" << this->length * this->width * this->height << endl;
        cout << "-----------------------------" << endl;
    }
};

enum Emenu
{
    Exit = 0,
    display = 1,
    accept = 2

};
Emenu menu()
{
    int choice;
    cout << "----------------------" << endl;
    cout << "0:exit" << endl;
    cout << "1:display" << endl;
    cout << "2:accept" << endl;
    cout << "choice=";
    cin >> choice;
    return Emenu(choice);
}
int main()
{
    volume v(10, 20, 30);
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {

        case display:
            v.display();
            break;
        case accept:
            v.accept();
            v.display();

            break;

        case Exit:
            break;
        default:
            cout << "select in given " << endl;
            break;
        }
    }
    cout << "out " << endl;
    return 0;
}