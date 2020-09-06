/* Largest Array */

#include <iostream>
using namespace std;

int main()
{
    int i, n, m, c, d;

    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    cin >> m;
    int b[m];
    for (i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    c = sizeof(a)/sizeof(a[0]);
    d = sizeof(b)/sizeof(b[0]);
    
    if (c>d)
    {
        cout << "Array 1 is Largest" << endl;
    }
    
    else if (d>c)
    {
        cout << "Array 2 is Largest" << endl;
    }   

    else if (c==d)
    {
        cout << "They are of equal size" << endl;
    }

    else
    {
        cout << "ERROR" << endl;
    }
}

