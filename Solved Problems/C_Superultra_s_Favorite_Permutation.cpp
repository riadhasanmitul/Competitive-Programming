#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using iset=tree<T,null_type,less<T>,
rb_tree_tag,tree_order_statistics_node_update> ;//find_by_order/find_by_key
#define ll long long
#define YY cout<<"YES"<<endl;
#define NN cout<<"NO"<<endl;
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
    vector<int>v;
    if(n>4){
        if(n==5||n==6){
            v.pb(1);
            v.pb(3);
            v.pb(5);
            v.pb(4);
            v.pb(2);
            if(n==6)v.pb(6);
        }else if(n==7){
            v.pb(1);
            v.pb(3);
            v.pb(5);
            v.pb(7);
            v.pb(2);
            v.pb(4);
            v.pb(6);
        }else{
            for(int i=3;i<=n;i++){
                if(i&1)v.pb(i);
            }
            v.pb(1);
            v.pb(8);
            for(int i=2;i<=n;i++){
                if(i%2==0&&i!=8)v.pb(i);
            }
        }
    }else{
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<ss;
    }cout<<endl;
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