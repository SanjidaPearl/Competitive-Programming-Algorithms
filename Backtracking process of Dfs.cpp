//Bismillahir-Rahmanir-Rahim
#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int llu;
typedef double dl;
#define f1(i,n) for(i=1;i<=n;i++)
#define f(i,n) for(i=0;i<n;i++)
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
#define pii pair<ll,ll>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
using namespace std;
vector<ll>ans,v[200007];
ll vis[200007];
void dfs(ll src)
{
    ll x,i;
   vis[src]=1;
   cout<<"src : "<<src<<endl;
   ans.pb(src);
    for(i=0;i<v[src].size();i++)
    {
        x=v[src][i];
        if(!vis[x])
        {
            cout<<"call dfs "<<x<<endl;///stack e upore keu push holey..
            dfs(x);
                   ///stack er uporerta niey kaj hbe..
             cout<<"pop source "<<src<<endl;
            ans.pb(src);
        }
    }
}
int main()
{
    ll t,n,i,j,k,m,w,h,l,r,x,p,s=0;
    cin>>n;
    f1(i,n-1)
    {
        cin>>l>>r;
        v[l].pb(r);
        v[r].pb(l);
    }
    f1(i,n)
    {
        sv(v[i]);
    }
    dfs(1);
    f(i,ans.size())
    cout<<ans[i]<<" ";
    cout<<endl;
}
