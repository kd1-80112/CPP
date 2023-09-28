#include <iostream>
using namespace std;

class student
{
public:
    string name;
    string gender;
    int rollno;
    int marks[3];

public:
    void accept()
    {
        // cout << "enter name of student=";
        // cin >> this->name;
        // cout << "enter gender of student=";
        // cin >> this->gender;
        cout << "enter roll nummber=";
        cin >> this->rollno;
        // for (int i = 0; i < 3; i++)
        // {
        //     cout << "enter marks=";
        //     cin >> marks[i];
        // }
    }
    int percentage()
    {
        int sum = 0;
        int percentage = 0;
        (sum * 100 / 300);
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }
        percentage = (sum * 100 / 300);
        return percentage;
    }
    void disply()
    {
        cout << "roll no=" << rollno << endl;
        // cout << "gender=" << gender << endl;
        // cout << "percentage=" << percentage() << endl;
        cout << "-----------------------------" << endl;
    }
};

int searchrecords(student s[], int size, int n)
{
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (s[i].rollno == n)
        {
            k = i;
        }
    }
    cout << "searced record" << endl;
    return k;
}
void sortRecords(student s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (s[j].rollno > s[j + 1].rollno)
            {
                swap(s[j].rollno, s[j + 1].rollno);
            }
        }
    }
    cout << "sorted records=" << endl;
}

int main()
{
    student s[5];
    for (int i = 0; i < 5; i++)
    {
        s[i].accept();
        s[i].disply();
    }

    s[searchrecords(s, 5, 1)].disply();
    sortRecords(s, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << s[i].rollno << endl;
    }
}
