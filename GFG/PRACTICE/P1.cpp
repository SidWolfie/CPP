/* Find pairs from array whose sum is equal to a given number */

#include <iostream>
using namespace std;

int main()
{
    int a, i, j, sum, n, s=0;

    cout << "Enter Size Of 1-D Array : ";
    cin >> n ;

    cout << "Enter Array : " << endl;

    int A[n];
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Enter A No. : " ;
    cin >> a ;

    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (A[i] + A[j]==a)
            {
                cout << "(" << A[i] << "," << A[j] << ")" << endl;
                s=1;
            }          
        }
    }

    if (s==0)
        {
            cout << "No Such Pair." << endl;
        }
} 

