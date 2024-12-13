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
vector<int>divisors;
void findDivisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0)divisors.pb(i);
    }
}
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    findDivisors(n-2);
    for(int i=0;i<divisors.size();i++){
        for(int j=0;j<divisors.size();j++){
            if(divisors[i]*divisors[j]==n-2&&mp[divisors[i]]&&mp[divisors[j]]){
                cout<<divisors[i]<<ss<<divisors[j]<<endl;
                return;
            }
        }
    }
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