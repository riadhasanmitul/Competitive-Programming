#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
#define FASTIO                       \
    ios_base::sync_with_stdio(NULL); \
    cin.tie(NULL);
ll divisionbythree(ll a,ll b)
{
    ll count = (a/2)*b;
    return count;
}
int main()
{
    FASTIO
    int caseno;
    cin >> caseno;
    for (int cases = 1; cases <= caseno; ++cases)
    {
        ll a, b;
        cin >> a >> b;
        printf("Case %d: %lld\n", cases, divisionbythree(a,b));
    }
    return 0;
}