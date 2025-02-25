#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define test int t;cin>>t;while(t--)
#define AI for(int i=0;i<n;i++)cin>>arr[i]
int main()
{
    int items,query;
    cin>>items>>query;
    int arr[items],prefix[items+1];
    arr[0]=0;
    for (int i = 1; i <= items; i++)
    {
        cin>>arr[i];
    }
    prefix[0]=0;
    for (int i = 1; i <= items; i++)
    {
        prefix[i]=prefix[i-1]^arr[i];
    }
    while (query--)
    {
        int r1,r2;
        cin>>r1>>r2;
        int ans = prefix[r1-1]^prefix[r2];
        cout<<ans<<endl;
    }
    
    return 0;
}