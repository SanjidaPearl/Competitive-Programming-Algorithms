#include<bits/stdc++.h>
#define mx 1000009
using namespace std;
struct edge{
    int u,v,w;
    bool operator<(const edge& p) const
    {
        return w < p.w;
    }
};
int par[mx];
vector<edge>e;
int find(int r)
{
    return (par[r]==r)?r:find(par[r]);
}
int mst(int n)
{
    int i,j,s=0,cnt=0;
    sort(e.begin(),e.end());
    for(i=1;i<=n;i++)
    {
        par[i]=i;
    }
    for(i=0;i<e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            par[u]=v;
            cnt++;
            s+=e[i].w;
            if(cnt==n-1)
                break;
        }
    }
    return s;
}
int main()
{
    int n,m,i,u,v,w;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
    }
    cout<<mst(n)<<endl;
}
