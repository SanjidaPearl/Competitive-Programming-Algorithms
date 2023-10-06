#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef long long int ll;
typedef unsigned long long int llu;
typedef double dl;
#define f1(i,n) for(i=1;i<=n;i++)
#define f(i,n) for(i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define Max 1000009
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
#define c(x) cout<<x;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
vector<ll>vec[200006];
ll vis[200006];
void dfs(ll src)
{
    ll x,y,i,j;
   vis[src]=1;
   cout<<src<<" ";
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
    ll t,ans,n,p,m,g,u,v,i,j,w;
     cin>>t;
    while(t--){
            ms(vis,0);
    cin>>n>>m;
    f1(i,m)
    {
        cin>>u>>v;
        vec[u].pb(v);
        vec[v].pb(u);
    }
    dfs(1);
    cout<<endl;
    for(i=0;i<=n;i++)
        vec[i].clear();
    }
}


