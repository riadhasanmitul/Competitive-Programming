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
#define pb push_back
#define ss " " 
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define endl "\n"
const int N=1e5+10;
const int mod=1000000007;
const long double pi=3.141592653589793238;

void solve(){
    int n,m,temp,one=0,two=0,other=0;cin>>n>>m;
    map<int,int>mp;
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        mp[temp]++;
        cin>>temp;
        mp[temp]++;
    }
        for(auto it:mp){
            if(it.second==2)two++;
            else if(it.second==1)one++;
            else other=it.second;
        }
        if(two==2&&one==n-2)cout<<"bus topology"<<endl;
        else if(n==two&&other==0&&one==0)cout<<"ring topology"<<endl;
        else if(n-1==one&&other>2)cout<<"star topology"<<endl;
        else cout<<"unknown topology"<<endl;
}

signed main()
{
    fastio
    int test=1;
    //cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
//Iterate from n-1 index,Use Map,is testcase input needed? 