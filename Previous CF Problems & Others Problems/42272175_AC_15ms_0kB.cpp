#include <bits/stdc++.h>
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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    return 0;
}