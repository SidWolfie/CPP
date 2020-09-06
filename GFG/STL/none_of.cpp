/* STL - none_of() */

#include <iostream> 
#include <algorithm>
using namespace std;

int main()
{
    int a[6] = {1, 2, -3, 4, 5, 6};

    none_of(a, a+6, [](int y) { return y<0; })?
        cout << "No negative elements" : 
        cout << "There are negative elements";

    return 0;
}