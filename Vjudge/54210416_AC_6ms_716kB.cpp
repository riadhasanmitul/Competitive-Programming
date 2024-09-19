#include<bits/stdc++.h>
using namespace std;
#define sz1 s1.size()
#define sz2 s2.size()
    int casee=1;
void solve(){
    string s1,s2,s3="",s4="";
    if(casee==1)cin.ignore();
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<sz1;i++){
        s1[i]=(char)tolower(s1[i]);
        if(s1[i]!=' ')s3+=s1[i];
    }
    for(int i=0;i<sz2;i++){
        s2[i]=(char)tolower(s2[i]);
        if(s2[i]!=' ')s4+=s2[i];
    }
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());
    if(s3==s4)cout<<"Case "<<casee<<": "<<"Yes"<<endl;
    else cout<<"Case "<<casee<<": "<<"No"<<endl;
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