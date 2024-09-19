#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t,q;cin>>t>>q;
    ll array[t],prefixsum[t];
    for (int i = 0; i < t; i++)
    {
        cin>>array[i];
    }
    prefixsum[0]=array[0];
    for (int i = 1; i < t; i++)
    {
        prefixsum[i]=array[i]+prefixsum[i-1];
    }
    while(q--){
        int s,e;
        cin>>s>>e;
        s--;e--;
        if(s==0){
            cout<<prefixsum[e]<<endl;
        }else
        cout<<prefixsum[e]-prefixsum[s-1]<<endl;
    }
    return 0;
}