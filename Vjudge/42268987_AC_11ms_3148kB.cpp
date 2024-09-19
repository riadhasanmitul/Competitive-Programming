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
    int n;cin>>n;
    while(n--){
        ll sum;
        int a,b;
        cin>>a>>b;
        sum=a+b;
        cout<<sum<<endl;
    }
    return 0;
}