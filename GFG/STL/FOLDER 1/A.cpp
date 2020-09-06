/* Fast Way To Sort 2 Arrays */

#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
using namespace std;
#define ll long long

int main()
{
    fastio;
    int N;
    cin>>N;
    while(N--)
    {
        int n,k;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        cin>>k;
        sort(arr,arr+n);
        cout << arr[k-1] << '\n';    
    }
    return 0;
}