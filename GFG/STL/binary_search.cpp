/* STL - Binary Search In Sorted Array */

#include <iostream>
#include <algorithm>
using namespace std;

void show(int a[], int n)
{
    for (int i = 0; i < n; i++) cout << a[i] ;
}

int main()
{   
    int n,y;
    cout<<"ENTER THE NO. : "; cin>>y;
    int a[]={1,3,5,6,7,4,2,9,8};
    n=sizeof(a)/sizeof(a[0]);
    cout<<"\nUNSORTED ARRAY : "; show(a,n);

    //sort(a,a+n,greater<int>());   FOR DESCENDING
    sort(a,a+n);
    cout<<"\nSORTED ARRAY : "; show(a,n); 

    //if(binary_search(a+n,a,y))    FOR DESCENDING
    if(binary_search(a,a+n,y)) cout<<"\n\nFOUND";
    else cout<<"\n\nNOT FOUND";

    return 0;
}