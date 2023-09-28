#include <iostream>
using namespace std;
class Time
{
    int hour;
    int min;
    int seconds;

public:
    Time()
    {
        this->hour = 0;
        this->min = 0;
        this->seconds = 0;
    }
    Time(int h, int m, int s)
    {
        this->hour = h;
        this->min = m;
        this->seconds = s;
    }
    void printTime()
    {
        cout << "this->hour=" << this->hour << endl;
        cout << "this->min=" << this->min << endl;
        cout << "this->seconds=" << this->seconds << endl;
        cout << "Time=" << this->hour << ":" << this->min << ":" << this->seconds << endl;
    }
    int getHour()
    {
        cout << "inside get hour" << endl;

        return this->hour;
    }
    int getMinute()
    {
        cout << "inside get minutes" << endl;

        return this->min;
    }
    int getSeconds()
    {
        cout << "inside get seconds" << endl;
        return this->seconds;
    }
    void setHour(int hour)
    {
        cout << "inside set hour" << endl;

        this->hour = hour;
    }
    void setMinutes(int minutes)
    {
        cout << "inside set min" << endl;

        this->min = minutes;
    }
    void setSeconds(int seconds)
    {
        cout << "inside set seconds" << endl;

        this->seconds = seconds;
    }
};
int main()
{
    Time **arr = new Time *[5];

    arr[0] = new Time(10, 10, 10);
    arr[1] = new Time(1, 1, 1);
    arr[2] = new Time(2, 2, 2);
    arr[3] = new Time(3, 3, 3);
    arr[4] = new Time(4, 4, 4);

    for (int i = 0; i < 5; i++)
    {
        arr[i]->printTime();
        arr[i]->getHour();
        arr[i]->getMinute();
        arr[i]->getSeconds();
        cout << "--------------------------" << endl;
        arr[i]->setHour(5);
        arr[i]->setMinutes(5);
        arr[i]->setSeconds(5);
        arr[i]->printTime();
        cout << "**************************" << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        delete arr[i];
    }
    delete[] arr;
}