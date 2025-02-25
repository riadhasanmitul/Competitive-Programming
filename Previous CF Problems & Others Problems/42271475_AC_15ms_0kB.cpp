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
    int n,flag=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1){
            flag=-1;break;}
    }
    if (flag==0)
    {
        cout<<"EASY"<<endl;
    }else cout<<"HARD"<<endl;
    
}