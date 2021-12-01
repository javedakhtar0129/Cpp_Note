#include <iostream>
using namespace std;
void setnumbers(int &x, int &y, int &z);
void average(int x, int y, int z);
void median(int x, int y, int z);

int main()
{
    int x, y, z;
    setnumbers(x, y, z);
    average(x, y, z);
    median(x, y, z);

    return 0;
}
void setnumbers(int &x, int &y, int &z)
{
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Enter third number: ";
    cin >> z;
}

void average(int x, int y, int z)
{
    cout << endl
         << "Average of numbers is: " << (float)(x + y + z) / 3 << endl;
}

void median(int x, int y, int z)
{
    if (x < y && y < z)
    {
        cout << "Median is: " << y;
    }
    else if (z < y && y < x)
    {
        cout << "Median is: " << y;
    }
    else if (y < x && x < z)
    {
        cout << "Median is: " << x;
    }
    else if (z < x && x < y)
    {
        cout << "Median is: " << x;
    }
    else if (y < z && z < x)
    {
        cout << "Median is: " << z;
    }
    else if (x < z && z < y)
    {
        cout << "Median is: " << z;
    }
}