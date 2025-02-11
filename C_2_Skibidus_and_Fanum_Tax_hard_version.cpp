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
    int n,m;cin>>n>>m;
    vector<int>v1(n),v2(m);
    for(int i=0;i<n;i++)cin>>v1[i];
    for(int i=0;i<m;i++)cin>>v2[i];
    sort(all(v2));
    if(v1[0]>v2[0]-v1[0])v1[0]=v2[0]-v1[0];
    
    for(int i=1;i<n;i++){
        int low=v1[i-1]+v1[i];
        int lb = lower_bound(all(v2),low)-v2.begin();
        if(lb!=m){
            if(v1[i]>v2[lb]-v1[i])v1[i]=v2[lb]-v1[i];
            if(v1[i-1]>v1[i])v1[i]=v2[lb]-v1[i];
        }
    }
    if(is_sorted(all(v1)))YY
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