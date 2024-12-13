#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T>
using iset = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define YY cout << "YES" << endl;
#define NN cout << "NO" << endl;
#define sz s.size()
#define pb push_back
#define ss " "
#define all v.begin(), v.end()
#define endl "\n"
const int N = 1e5 + 10;
const int mod = 1000000007;
const long double pi = 3.141592653589793238;

void solve()
{
    int fph, fpa, fpc;
    cin >> fph >> fpa >> fpc;
    int sph, spa, spc;
    cin >> sph >> spa >> spc;
    int resf = 0, ress = 0;
    while (fph > resf && sph > ress)
    {
        if (resf + fpa + fpc < fph && ress + spa + spc < sph)
        {
            resf = resf + fpa + fpc;
            ress = ress + spa + spc;
        }
        else
        {
            resf += fpa;
            ress += spa;
            break;
        }
    }
    if (ress >= sph && resf >= fph)cout << "DRAW" << endl;
    else if (resf >= fph)cout << "MIKE TYSON" << endl;
    else if (ress >= sph)cout << "JAKE PAUL" << endl;
    else
    {
        int needf=resf+fpc,needs=ress+spc;
        if(needf>=fph&&needs>=sph)cout << "DRAW" << endl;
        else if (spc < fpc)cout << "MIKE TYSON" << endl;
        else cout << "JAKE PAUL" << endl;
    }
}
signed main()
{
    fastio int test = 1;
    // cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
// Iterate from n-1 index,Use Map,is testcase input needed?