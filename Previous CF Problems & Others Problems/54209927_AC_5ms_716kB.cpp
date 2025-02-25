#include<bits/stdc++.h>
using namespace std;
    int casee=1;
void solve(){
    string s;cin>>s;
    cout<<"Case "<<casee<<": ";
    if(s[4]!='s'){
        for(int i=0;i<s.size();i++){
            cout<<s[i];
            if(i==3)cout<<'s';
        }cout<<endl;
    }else cout<<s<<endl;
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