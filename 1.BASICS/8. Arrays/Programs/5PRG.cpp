#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int A[10], s, l;
    int sum = 0;
    int smallest = INT_MAX, largest = INT_MIN;
    srand(time(0));

    //Asigning numbers
    for (int i = 0; i < 10; i++)
    {
        *(A + i) = ((rand() % 100) + 1);
    }

    //Printing numbers
    cout << endl
         << "10 number array is: ";
    for (int i = 0; i < 10; i++)
    {
        cout << *(A + i) << "  ";
    }
    //Finding Largest & smallest numbers
    for (int i = 0; i < 10; i++)
    {
        if (A[i] > largest)
        {
            l = i;
        }
        else if (A[i] < smallest)
        {
            s = i;
        }
    }
    //Printing without largest and smallest
    cout << endl
         << endl
         << "Largest number is: " << A[l] << endl;
    cout << "Smallest number is: " << A[s] << endl;
    cout << endl
         << "Array without largest and smallest: ";
    for (int i = 0; i < 10; i++)
    {
        if (i == l || i == s)
        {
            i++;
        }
        else
        {
            cout << A[i] << "  ";
        }
    }

    return 0;
}
