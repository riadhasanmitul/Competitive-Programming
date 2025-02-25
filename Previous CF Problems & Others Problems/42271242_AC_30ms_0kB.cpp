#include <iostream>
#include <cstring>
#include <unordered_set>
using namespace std;
#define endl '\n'
typedef long long ll;
void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}

int main()
{
    init_code();
    string s;
    cin>>s;
    unordered_set<char>ss;
    for (int i = 0; i < s.size(); i++)
    {
        ss.insert(s[i]);
    }
    if(ss.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else cout<<"IGNORE HIM!"<<endl;
    return 0;
}