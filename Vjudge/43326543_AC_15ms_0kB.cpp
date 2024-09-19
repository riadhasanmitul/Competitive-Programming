#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 100000000007
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a%100;b=b%100;c=c%100;d=d%100;
    ll ans=(a*b*c*d)%100;
    if(ans<10)cout<<"0"<<ans<<endl;
    else cout<<ans<<endl;
    return 0;
}