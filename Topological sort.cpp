///Bismillahir-Rahmanir-Rahim
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef long long int ll;
typedef unsigned long long int llu;
typedef double dl;
#define f1(i,n) for(i=1;i<=n;i++)
#define f(i,n) for(i=0;i<n;i++)
#define f2(i,l,r) for(i=l;i<=r;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define Max 1000009
#define mod 1000000007
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
#define sq(x) sqrtl(x);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>///for unique
#define ordered_set2 tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>///for multiple
#define ordered_set3 tree<pii, null_type, less_equal<pii>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
inline ll ncr(ll n, ll r){ll a=max(n-r,r),val=1,d=1; while(n>a) val*=n,val/=d,n--,d++; return val;}
vector<ll>vec[200000];
vector<ll>ans;
ll col[200000],cycle;
void dfs(ll src)
{
    col[src]=1;///coloring gray-all adjacent are unvisited
    ll i,j;
    for(auto x:vec[src])
    {
        if(!col[x])
        {
            dfs(x);
        }
        else if(col[x]==1)
            cycle=1;
    }
    col[src]=2;///coloring black- all adjacent are visited
    ///all children are visited
    ans.push_back(src);
}
int main()
{
    // fast
     ll t,n,i,j,k,l,l1,r,x,y,u,v,m,w,h,mx,g,p;
        memset(col,sizeof(col),0);
        cin>>n>>k;
        f1(i,k)
        {
            cin>>u>>v;
            vec[u].pb(v);
        }
        cycle=0;
        f1(i,n)
        {
            if(!col[i])
            {
                dfs(i);
            }
        }
        if(cycle==1)
            cout<<"Topological Order not found\n";
        else{
        reverse(ans.begin(),ans.end());
        cout<<"Topological Order\n";
        for(i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
        }
        ans.clear();
        for(i=0;i<=n;i++)
         vec[i].clear();
}










