/* STL - any_of() */

#include <iostream> 
#include <algorithm>
using namespace std;

int main()
{
    int a[6] = {1, 2, -3, 4, 5, 6};

    any_of(a, a+6, [](int y) { return y<0; })?
        cout << "There exists a negative element" : 
        cout << "All are positive elements";

    return 0;
}