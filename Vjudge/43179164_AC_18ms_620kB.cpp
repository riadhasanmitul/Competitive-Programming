#include <bits/stdc++.h>
using namespace std;
#define ll long double
void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}
int main()
{
    init_code();
    int cases;
    cin>>cases;
    int casee=1;
    while (cases--)
    {
        ll n;cin>>n;
        printf("Case %d: %.2Lf\n", casee,((2*n)*(2*n)) - ((2 * acos(0.0)) * n * n));
        casee++;
    }
    
    return 0;
}