//Bismillahir-Rahmanir-Rahim
#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int llu;
typedef double dl;
#define f1(i,n) for(i=1;i<=n;i++)
#define f(i,n) for(i=0;i<n;i++)
#define Max 10000009
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sv(v) sort(v.begin(),v.end())
#define rv(v) reverse(v.begin(),v.end())
#define sa(a,n,i) sort(a+i,a+n+i);
#define sp(n) fixed<<setprecision(n)
#define ms(a,n) memset(a,n,sizeof(a));
#define lb lower_bound
#define ub upper_bound
#define lcm(a,b) (a/__gcd(a,b))*b
#define pii pair<ll,ll>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
using namespace std;
vector<ll>vec[200002];
ll vis[200002];
ll p1,d;
void dfs(ll src)
{
    ll x,y,i,j;
   vis[src]=1;
     if(vec[src].size()!=2)
        d=1;
    for(i=0;i<vec[src].size();i++)
    {
        ll v=vec[src][i];
        if(!vis[v])
        {
           dfs(v);
        }
    }
}
int main()
{
    ll t,ans=0,n,m,p,g,u,v,i,j,w;
            ms(vis,0);
    cin>>n>>m;
    f1(i,m)
    {
        cin>>u>>v;
        vec[u].pb(v);
        vec[v].pb(u);
    }
    f1(i,n){
        if(!vis[i]){
                d=0;
        dfs(i);
       if(d==0)
        cout<<"Cycle found in this component\n";
       else cout<<"Cycle not found in this component\n";
        }
    }
}

