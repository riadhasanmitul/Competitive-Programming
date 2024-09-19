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
    int a,b,count=0;
    cin>>a>>b;
    while (a<=b)
    {
        a=a*3;
        b=b*2;
        count++;
    }
    cout<<count<<endl;
}