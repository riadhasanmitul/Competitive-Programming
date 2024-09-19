#include <map>
#include <set>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <bitset>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define FasterIO                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define N 1e6 + 7;
#define modd 1e9 + 7;
#define endl '\n'
#define pb push_back
#define caseprint cout << "Case " << i << ": ";
void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}
void solve()
{
    int t;
    cin >> t;
    int arr[t][3];
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
    if (t > 1)
    {
        ll dp[t][3];
        dp[0][0] = arr[0][0];
        dp[0][1] = arr[0][1];
        dp[0][2] = arr[0][2];
        for (int i = 1; i < t; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (j == 0)
                {
                    dp[i][j] = arr[i][j] + max(dp[i-1][j + 1], dp[i-1][j + 2]);
                }
                else if (j == 1)
                {
                    dp[i][j] = arr[i][j] + max(dp[i-1][j - 1], dp[i-1][j + 1]);
                }
                else
                {
                    dp[i][j] = arr[i][j] + max(dp[i-1][j - 1], dp[i-1][j - 2]);
                }
            }
        }
        cout<<max(dp[t-1][0],max(dp[t-1][1],dp[t-1][2]));
    }else cout<<max(arr[t-1][0],max(arr[t-1][1],arr[t-1][2]));
}
int main()
{
    init_code();
    FasterIO
    solve();
    return 0;
}