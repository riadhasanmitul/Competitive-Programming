#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
string dec_to_bin(int n)
{
    string str="";
    for(int i=31;i>=0;i--)
        {
            int k=1<<i;
            str+=(n&k)?'1':'0';
        }
        return str;
}
int bin_to_dec(string s) {
    int ret = 0;
    for (int i = 0; i < 32; i++)
        ret = (2*ret) + s[i] - '0';
    return ret;
}
int main()
{
    int t;
    cin>>t;
    int casee=1;
    while (t--)
    {
        int n;
        cin>>n;
        string binary = dec_to_bin(n);
        next_permutation(binary.begin(),binary.end());
        cout<<"Case "<<casee<<": ";
        cout<<bin_to_dec(binary)<<endl;
        casee++;
    }

return 0;
}
