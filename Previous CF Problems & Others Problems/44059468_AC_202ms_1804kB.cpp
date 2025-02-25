#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    vector<tuple<ll,ll,ll,string>>v;
    for (int i = 0; i < n; i++)
    {
        ll a,b,c;
        string d;
        cin>>a>>b>>c;
        getline(cin,d);
        v.push_back({a,b,c,d});
        sort(v.begin(),v.end());
    }
    auto [x,y,z,xx]=v[n-1];
    cout<<xx<<endl;
    return 0;
}