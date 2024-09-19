#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,casee=1;
    cin >> t;
    while (t--)
    {
        string s1,s2;
        cin >> s1;
        s2=s1;
        int j=s1.size()-1;
        for (int i = 0; i <s1.size(); i++)
        {
            s2[i]=s1[j];
            j--;
        }
        if(s1==s2){
            cout<<"Case "<<casee<<": "<<"Yes"<<endl;
        }else cout<<"Case "<<casee<<": "<<"No"<<endl;
        casee++;
    }
}