#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using iset=tree<T,null_type,less<T>,
rb_tree_tag,tree_order_statistics_node_update> ;//find_by_order/find_by_key
#define int long long
#define YY cout<<"YES"<<endl;
#define NN cout<<"NO"<<endl;
#define yy cout<<"Yes"<<endl;
#define nn cout<<"No"<<endl;
#define sz s.size()
#define vi vector<int>
#define pb push_back
#define ss " " 
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define endl "\n"
const int N=1e5+10;
const int mod=1000000007;
const long double pi=3.141592653589793238;

void solve(){
    int n,m,t;cin>>n>>m;
    vector<vector<int>>v(n);
    vector<pair<int,int>>sum(n);
    for(int i=0;i<n;i++){
        sum[i].second=i;
        for(int j=0;j<m;j++){
            cin>>t;
            v[i].push_back(t);
            sum[i].first+=t;
        }
    }
    sort(all(sum));
    int res=0,l=1;
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            res+=(v[sum[i].second][j]*l);
            l++;
        }
    }
    cout<<res<<endl;
}

signed main()
{
    fastio
    int test=1;
    cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
//Iterate from n-1 index,Use Map,is testcase input needed?