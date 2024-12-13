#include<bits/stdc++.h>
using namespace std;
vector<int>g[10010],path[10010];
int vis[10010],level[10010];
void BFS(int u,int des)
{
    int a,b,i,flag=0;
    vis[u]=1;
    //level[u]=0;
    queue<int>que;
    que.push(u);
    while(!que.empty())
    {
        a=que.front();
        for(i=0; i<g[a].size(); i++)
        {
            b=g[a][i];
            if(vis[b]==0)
            {
                vis[b]=1;
                //level[b]=level[a]+1;
                path[b].push_back(a);
                if(b==des)
                {
                    flag=1;
                    break;
                }
                que.push(b);
            }
        }
        if(flag==1)
            break;
        que.pop();
    }
    vector<int>ve;
    ve.push_back(b);
    int x=b;
    while(x!=0)
    {
        ve.push_back(path[x][0]);
        x=path[x][0];
    }
    for(int i=ve.size()-1; i>=0; i--)
        cout<<ve[i]<<" ";
    cout<<endl;
}

int main()
{
    int n,i,a,b,m;
    while(cin>>n>>m)
    {
        for(int i=0; i<=n+10; i++)
        {
            g[i].clear();
            path[i].clear();
            vis[i]=0;
            //level[i]=0;
        }
        for(i=1; i<=m; i++)
        {
            cin>>a>>b;
            g[a].push_back(b);
        }
        BFS(0,n-1);
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mxn=1e5+10;
vector<ll>g[mxn+10];
ll vis[mxn+10];
ll level[mxn+10];
void BFS(ll u)
{
    vis[u]=1;
    level[u]=0;
    queue<ll>q;
    q.push(u);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(ll i=0;i<g[u].size();i++)
        {
            ll x=g[u][i];
            if(vis[x]==0)
            {
                q.push(x);
                vis[x]=1;
                level[x]=level[u]+1;
            }
        }
    }
}

int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    BFS(1);
    cout<<level[5]<<endl;
}

