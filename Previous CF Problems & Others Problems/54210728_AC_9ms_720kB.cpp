#include<bits/stdc++.h>
using namespace std;
    int casee=1;
void solve(){
    cout<<"Case "<<casee<<": "<<endl;
    int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    int q;cin>>q;
    while(q--){
        int x,y;cin>>x>>y;
        if(x>=x1&&x<=x2&&y>=y1&&y<=y2)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    casee++;
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