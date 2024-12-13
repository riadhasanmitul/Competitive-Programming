#include <bits/stdc++.h>
using namespace std;
 
typedef     long long       ll;
 
ll gcd(ll a, ll b)
{
    if(a < b) swap(a,b);
    if(b == 0) return a;
    return gcd(b,a%b);
}
 
ll gcd_iterative(ll a, ll b)
{
    if(a < b) swap(a,b);
    while(b)
    {
        ll p = b; ll q = a%b;
        a = p; b = q;
    }
    return a;
}
ll lcm(ll a, ll b)
{
    return a*(b/gcd(a,b));
}
 
ll bin_expo(ll base, ll p, ll m)
{
    if(!base) return 0;
    if(!p) return 1;
    // base %= m;
    ll ans = 1;
    if(p % 2 == 0) {
        ans = bin_expo(base, p /2,m);
        return (ans * ans)%m;
    }
    else {
        ans = bin_expo(base, p /2,m);
        return ((ans * ans)%m * base)%m; 
    }
}
 
ll bin_exp(ll a, ll p, ll m)
{
    if(!p) return 1;
    ll ans = 1;
    while(p)
    {
        if(p&1) ans = (ans * a)%m;
        a = a * a %m;
        p = p >> 1;
    }
    return ans;
}
int main()
{
    ll a, b;
    cin >> a >> b;
    cout << bin_exp(a,b,1e9+7) << "\n";
}
