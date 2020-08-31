/* Sort An Array. */

#include <iostream>
using namespace std;

int main() 
{
    int i, j, n, t;
    int A[n];

    cout << "Enter Size Of Array : ";
    cin >> n;

    cout << "Enter Array : \n";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (A[i]>A[j])
            {
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
        }     
    }

    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

return 0;
    
}