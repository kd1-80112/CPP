#include <iostream>
using namespace std;
class matrix
{
    int x;
    int y;
    int **arr;

public:
    matrix()
    {
        this->x = 0;
        this->y = 0;
    }
    matrix(int x, int y)
    {
        this->x = x;
        this->y = y;
        arr = new int *[y];

        for (int i = 0; i < x; i++)
        {
            arr[i] = new int;
        }
    }

    void accept()
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << "arr[" << i << "][" << j << "]=";
                cin >> arr[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << "-----------------" << endl;
    }
    void add()
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << " " << arr[i][j] + arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << "-----------------" << endl;
    }
    void subtract()
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << " " << arr[i][j] - arr[i][j];
            }
            cout << endl;
        }
        cout << "-----------------" << endl;
    }
    void multiply()
    {
        int mul;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << " " << arr[i][j] * arr[j][i];
            }
            cout << endl;
        }
    }
    void transpose()
    {

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                swap(arr[i][j], arr[j][i]);

                cout << arr[i][j];
            }
        }
    }
    ~matrix()
    {
        for (int i = 0; i < y; i++)
        {
            delete arr[i];
        }
        delete[] arr;
    }
};

int main()
{
    matrix m(3, 3);
    m.accept();
    m.display();
    m.add();
    m.subtract();
    m.multiply();
    m.transpose();
}
