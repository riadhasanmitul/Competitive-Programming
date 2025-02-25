#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define test int t;cin>>t;while(t--)
#define AI for(int i=0;i<n;i++)cin>>arr[i]
int main()
{
    int n;cin>>n;
    string s1="I hate",s2="I love",s3=" that ",s4=" it";
    for (int i = 1; i <= n; i++)
    {
        if(i%2==1){
            cout<<s1;
            if(i!=n){
                cout<<s3;
            }else cout<<s4;
        }else {cout<<s2;
        if(i!=n){
                cout<<s3;
            }else cout<<s4;}
    }
    
    return 0;
}
