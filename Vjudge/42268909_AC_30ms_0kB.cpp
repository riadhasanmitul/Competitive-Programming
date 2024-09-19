#include <iostream>
#include <cstring>
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
    int count=0,count2=0;
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]>64&&s[i]<91)
    {
        count++;
    }else count2++;
    }
    if (count2<count)
    {
        for (int i = 0; i < s.size(); i++)
        {
            char ch=toupper(s[i]);
            cout<<ch;
        }
    }else for (int i = 0; i < s.size(); i++){
            char ch=tolower(s[i]);
            cout<<ch;
        }
    return 0;
}