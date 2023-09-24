#include <iostream>
using namespace std;

namespace Nstudent
{
    class student
    {
        int rollno;
        string name;
        int marks;

    public:
        void initstudent();
        void printStudentOnConsole();
        void acceptStudentFromConnsole();
    };
}

void Nstudent::student::initstudent()
{
    this->rollno = 0;
    this->name = "";
    this->marks = 0;
}
void Nstudent::student::printStudentOnConsole()
{
    cout << "rollno=" << this->rollno << endl;
    cout << "name=" << this->name << endl;
    cout << "marks=" << this->marks << endl;
}
void Nstudent::student::acceptStudentFromConnsole()
{
    cout << "enter Roll no=";
    cin >> this->rollno;
    getchar();
    cout << "enter name=";
    getline(cin, this->name);
    cout << "marks=";
    cin >> this->marks;
};

enum Estudent
{
    Exit = 0,
    init_Student,
    ShowStudent,
    acceptStudent
};

Estudent menu()
{
    int choice;
    cout << "---------------" << endl;
    cout << "0:exit" << endl;
    cout << "1:initstudent" << endl;
    cout << "2:showsudent" << endl;
    cout << "3:acceptStudent" << endl;
    cout << "---------------" << endl;
    cout << "choice=";
    cin >> choice;
    return Estudent(choice);
}
int main()
{
    Nstudent::student s;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case init_Student:
            s.initstudent();
            s.printStudentOnConsole();
            break;

        case ShowStudent:
            s.printStudentOnConsole();
            break;

        case acceptStudent:
            s.acceptStudentFromConnsole();
            s.printStudentOnConsole();

            break;
        default:
            cout << "out" << endl;
            break;
        }
    }
    cout << "exit" << endl;
}