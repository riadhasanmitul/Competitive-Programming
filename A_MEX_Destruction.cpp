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
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    bool allzero=1,middlezero=0;
    for(int i=0;i<n;i++){
        if(v[i]){
            allzero=0;
        }
    }
    int s=0,e=n-1;
    if (!allzero)
    {
        for(int i=0;i<n;i++){
            if(v[i]){
                s=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v[i]){
                e=i;
                break;
            }
        }
        while (s<=e)
        {
            if(v[s]==0){
                middlezero=1;
                break;
            }else s++;
        }
        
    }
    
    if(allzero)cout<<0<<endl;
    else if(middlezero)cout<<2<<endl;
    else cout<<1<<endl;
}
//101
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