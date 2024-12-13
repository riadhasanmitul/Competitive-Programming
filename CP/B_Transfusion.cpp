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
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
    }
    int avg=sum/n;
    for(int i=1;i<n-1;i++){
            int temp=v[i-1];
        if(v[i-1]>avg){
            v[i-1]=avg;
            v[i+1]+=(temp-avg);
        }else if(v[i-1]<avg){

            v[i-1]=avg;
            v[i+1]-=(avg-temp);
        }
    }
    int flag=1;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1])flag=0;
    }
    if(flag)YY
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