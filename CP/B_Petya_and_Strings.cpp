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
using iset = tree<T, null_type, less<T>,
                  rb_tree_tag, tree_order_statistics_node_update>; // find_by_order/find_by_key
#define ll long long
#define YY cout << "YES" << endl;
#define NN cout << "NO" << endl;
#define sz s.size()
#define pb push_back
#define ss " "
#define all(x) (x).begin(), (x).end()
#define endl "\n"
const int N = 1e5 + 10;
const int mod = 1000000007;
const long double pi = 3.141592653589793238;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int sz2 = s1.size();
    for(int i=0;i<sz2;i++){
        if (s1[i] >= 'a' && s1[i] <= 'z')
            s1[i] -= 32;
        if (s2[i] >= 'a' && s2[i] <= 'z')
            s2[i] -= 32;
    }
    int flag=1;
    for(int i=0;i<sz2;i++){
        if(s1[i]>s2[i]){
            cout<<1<<endl;
            flag=0;
            return;
        }else if(s1[i]<s2[i]){
            cout<<-1<<endl;
            flag=0;
            return;
        }
    }
    if(flag)cout<<0<<endl;
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