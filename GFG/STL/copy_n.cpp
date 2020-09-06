/* STL - copy_n() */

#include <iostream> 
#include <algorithm>
using namespace std;

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};

    int b[6];

    copy_n(a, 6, b);
    
    cout << "New array is : "; for (int i = 0; i < 6; i++) cout << b[i];
    
    return 0;
}