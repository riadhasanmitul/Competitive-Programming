#include<bits/stdc++.h>
using namespace std;
vector<int>g[1000];
int vis[1000];
void DFS(int u)
{
    int a;
    for(int i=0; i<g[u].size(); i++)
    {
        a=g[u][i];
        if(vis[a]==0)
        {
            vis[a]=1;
            DFS(a);
        }
    }
}

int main()
{
    int n,a,b;
    while(cin>>n)
    {
        int cont=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a>>b;;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        for(int i=1; i<=n; i++)
        {
            if(vis[i]==0)
            {
                cont++;
                DFS(i);
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}