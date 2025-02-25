#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
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
    int cases,k=1;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        int n;cin>>n;
        if (n>10)
        {
            cout<<10<<" "<<n-10<<endl;
        }else cout<<0<<" "<<n<<endl;
    }
    return 0;
}