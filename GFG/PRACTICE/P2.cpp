/* Sort An Array */

#include <iostream>
using namespace std;

int main() 
{
    int n, i, t;

    cout << "Enter Size Of Array : ";
    cin >> n ;

    cout << "Enter Array : " << endl;

    int A[n];
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (A[i]>A[j])
            {
                t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
    
    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

