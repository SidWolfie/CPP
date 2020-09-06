/* STL - iota() */

#include <iostream>
#include<numeric>
#include <algorithm>
using namespace std;

int main()
{
    int a[6];

    iota(a, a+6, 11);
    
    cout << "New array is : "; for (int i = 0; i < 6; i++) cout << a[i] <<' ';
    
    return 0;
}