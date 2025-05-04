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
#define sz1 s1.size()
#define sz2 s2.size()
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
    string s1,s2;cin>>s1>>s2;
    s1.pb('0');
    s2.pb('0');
    vector<pair<int,char>>p1,p2;
    int cnt=1;
    for(int i=0;i<sz1;i++){
        if(s1[i]==s1[i+1])cnt++;
        else{
            p1.pb({cnt,s1[i]});
            cnt=1;
        }
    }
    cnt=1;
    for(int i=0;i<sz2;i++){
        if(s2[i]==s2[i+1])cnt++;
        else{
            p2.pb({cnt,s2[i]});
            cnt=1;
        }
        
    }
    if(p1.size()!=p2.size()){
        NN
        return;
    }
    else{
        for(int i=0;i<p1.size();i++){
            if(p1[i].first*2<p2[i].first||p1[i].first>p2[i].first||p1[i].second!=p2[i].second){
                NN
                return;
            }
        }
    }
    YY
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
//Binary search on answers,Iterate from n-1 index,Use Map,is testcase input needed?