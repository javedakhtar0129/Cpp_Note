#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    double A[10], X = 0;
    double sum = 0, average, stdDev;
    srand(time(0));

    //Asigning numbers
    for (int i = 0; i < 10; i++)
    {
        *(A + i) = ((rand() % 100) + 1);
    }

    //Printing numbers
    cout << endl
         << "Original 10 number array is: ";
    for (int i = 0; i < 10; i++)
    {
        cout << *(A + i) << "  ";
    }

    cout << endl
         << "Shifted array: ";
    A[0] = A[9];
    cout << A[0] << "  ";
    for (int i = 0; i < 9; i++)
    {
        cout << A[i] << "  ";
    }

    return 0;
}
