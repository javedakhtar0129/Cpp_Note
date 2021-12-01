#include <iostream>
#include <ctime>
#include <cmath>
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
    cout << "List of 10 random numbers are: ";
    for (int i = 0; i < 10; i++)
    {
        cout << *(A + i) << "  ";
    }

    //Average of the Array
    for (int i = 0; i < 10; i++)
    {
        sum += A[i];
    }
    average = sum / 10;
    cout << endl
         << "Average is: " << average;

    //Standard Deviation
    for (int i = 0; i < 10; i++)
    {
        X += pow((A[i] - average), 2);
    }
    stdDev = sqrt(X) / 10;
    cout << endl
         << "Standard Deviation: " << stdDev;

    //FIN!
    return 0;
}
