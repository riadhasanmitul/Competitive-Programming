#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--){
    string s;
    cin>>s;
    cout<<s[0]-'0'+s[2]-'0'<<endl;
    }
    return 0;
}