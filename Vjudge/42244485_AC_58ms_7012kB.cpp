#include <iostream>
#include<cstring>
using namespace std;
#define endl '\n'
typedef long long ll;
const int N = 1e5 + 10;
int h[N];
int dp[N];
int mincost(int i)
{
    int cost = INT_MAX;
    if (i == 0)return 0;
    if(dp[i]!=-1)return dp[i];
    cost = min(cost, mincost(i - 1) + abs(h[i] - h[i - 1]));
    if (i > 1)
        cost = min(cost, mincost(i - 2) + abs(h[i] - h[i - 2]));
    return dp[i]=cost;
}
int main()
{
    memset(dp, -1, sizeof dp);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    cout << mincost(n - 1) << endl;
    return 0;
}