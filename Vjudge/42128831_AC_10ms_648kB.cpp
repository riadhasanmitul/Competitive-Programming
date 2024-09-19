#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
#define FASTIO                       \
    ios_base::sync_with_stdio(NULL); \
    cin.tie(NULL);
ll divisionbythree(ll n)
{
    int count = 0;
    if (n % 3 == 0)
    {
        count = n / 3;
    }
    else
        count = floor(n / 3) + 1;
    return n - count;
}
int main()
{
    FASTIO
    int cases;
    cin >> cases;
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        int s, e;
        cin >> s >> e;
        printf("Case %d: %d\n", caseno, divisionbythree(e)-divisionbythree(s-1));
    }
    return 0;
}