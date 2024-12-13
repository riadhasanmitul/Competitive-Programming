#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using iset=tree<T,null_type,less<T>,
rb_tree_tag,tree_order_statistics_node_update> ;//find_by_order/find_by_key
#define ll long long
#define YY cout<<"Yes"<<endl;
#define NN cout<<"No"<<endl;
#define sz s.size()
#define pb push_back
#define ss " " 
#define all v.begin(),v.end()
#define endl "\n"
const int N=1e5+10;
const int mod=1000000007;
const long double pi=3.141592653589793238;

void solve(){
    int n;cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)cin>>v[i].second;
    for(int i=0;i<n;i++)cin>>v[i].first;
    sort(all);
    int maxf=0,maxs=v[n-1].first;
    for(int i=0;i<n;i++){
        maxf=max(maxf,v[i].second);
    }
    if(maxf>maxs)YY
    else NN
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