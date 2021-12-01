#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int A[100];
    srand(time(0));
    for (int i = 1; i <= 100; i++)
    {
        A[i] = ((rand() % 101) + 100);
    }
    for (int i = 1; i <= 100; i++)
    {
        if (i % 10 == 0)
        {
            cout << A[i] << endl;
        }
        else
        {
            cout << A[i] << "  ";
        }
    }

    return 0;
}