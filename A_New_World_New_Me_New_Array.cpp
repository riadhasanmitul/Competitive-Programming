#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
    int n,k,p;cin>>n>>k>>p;
    k=abs(k);
    int ans=0;
    for(int i=p;i>=1&&n;i--){
        if(i<=k){
            ans++;
            k-=i;
            n--;
            i++;
        }
    }
        if(k>0&&n<=0){
            cout<<-1<<endl;
            return;
        }
        cout<<ans<<endl;
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