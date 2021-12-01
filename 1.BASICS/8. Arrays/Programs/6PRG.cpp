#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int A[10];
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
    cout << endl
         << "Reverse array is: ";
    for (int i = 9; i > -1; i--)
    {
        cout << *(A + i) << "  ";
    }
    

    return 0;
}