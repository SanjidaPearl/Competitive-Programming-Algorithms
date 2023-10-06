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
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>///for unique
#define ordered_set2 tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>///for multiple
using namespace std;
using namespace __gnu_pbds;
ll par[Max],Size[Max];
void make(ll v)
{
    par[v]=v;
    Size[v]=1;
}
ll find(ll v)
{
    if(v==par[v]) return v;
    return par[v]=find(par[v]);
}
void Union(ll a,ll b)
{
    a=find(a);
    b=find(b);
    if(a!=b)
    {
        if(Size[a]<Size[b])
            swap(a,b);
        par[b]=a;
        Size[a]+=Size[b];
    }
}
int main()
{
     //fast
     ll t,n,i,j,k,q,u,v,l,l1,r,x,m,p,w,h,mx,mn,g;
     cin>>t;
     while(t--)
     {
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
          make(i);
        }
        while(k--)
        {
            cin>>u>>v;
            Union(u,v);
        }
        ll connected_ct=0;
        for(i=1;i<=n;i++)
        {
            if(find(i)==i)
                connected_ct++;
        }
        cout<<connected_ct<<endl;
     }
}




