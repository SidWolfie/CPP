/* STL - all_of() */

#include <iostream> 
#include <algorithm>
using namespace std;

int main()
{
    int a[6] = {1, 2, -3, 4, 5, 6};

    all_of(a, a+6, [](int y) { return y>0; })?
        cout << "All are positive elements" :
        cout << "All are not positive elements"; 
    
    return 0;
}