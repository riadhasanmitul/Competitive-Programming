#include <iostream>
#include <cstring>
using namespace std;
#define endl '\n'
const int N=1e5+10;
int h[N];
int dp[N];
int k;
int frog(int i){
    int cost=INT_MAX;
    if(i==0)return 0;
    if(dp[i]!=-1)return dp[i];
    for (int j = 1; j <= k; j++)
    {
        if (i-j>=0)cost=min(cost,frog(i-j)+abs(h[i]-h[i-j]));
    }
    return dp[i]=cost;
}
int main()
{
    memset(dp,-1,sizeof dp);
    int n;cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>h[i];
    }
    cout<<frog(n-1);
    return 0;
}