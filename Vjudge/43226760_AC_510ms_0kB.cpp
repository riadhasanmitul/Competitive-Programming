#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}
ll bigmod(ll base, ll power) { 
  ll res = 1;
  base = base % mod;
  while (power) {
    if (power & 1) res = (res*base) % mod; 
    power = power >> 1;
    base = (base*base) % mod;  
  }
  return res; 
}
int main()
{
    init_code();
    test
    {
        ll a, b;
        cin >> a >> b;
        cout << bigmod(a, b) << endl;
    }
    return 0;
}