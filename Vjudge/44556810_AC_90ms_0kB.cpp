#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    ll res=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            res=res+(arr[i]-arr[i+1]);
            arr[i+1]=arr[i];
        }
    }
    cout<<res<<endl;
    return 0;
}
