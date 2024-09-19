#include<iostream>
#define ll long long
using namespace std;
const int N=1e7+1;
ll sieve[N];
int main(){
    int n;
    cin>>n;
    ll sum=0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j+=i)
        {
            sieve[j]++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        sum+=(i*sieve[i]);
    }
    cout<<sum<<endl;
}