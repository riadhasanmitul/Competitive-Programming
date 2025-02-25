#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll a,b;cin>>a>>b;
        printf("Case %d: ", casee);
        cout<<(a/2)*b<<endl;
        casee++;
    }
    
    return 0;
}