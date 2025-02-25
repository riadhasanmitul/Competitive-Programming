#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    c=c%2;
    a+=c;
    if(a>b)cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}

int main()
{
    int test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}