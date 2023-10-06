///Bismillahir-Rahmanir-Rahim
#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int llu;
typedef double dl;
#define f1(i,n) for(i=1;i<=n;i++)
#define f(i,n) for(i=0;i<n;i++)
#define f2(i,l,r) for(i=l;i<=r;i++)
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
using namespace std;
inline ll ncr(ll n, ll r){ll a=max(n-r,r),val=1,d=1; while(n>a) val*=n,val/=d,n--,d++; return val;}
vector<ll>prime_fac[Max];
int main()
{
   // fast
    ll t,n,i,j,k,l,l1,x,y,m,h,r,mn,mx,g,p,q,ans=0;
    cin>>n;
    ll a[n+1];
    f1(i,n) cin>>a[i];
    set<ll>s;
    f1(i,n)
    {
        p=a[i];
        s.insert(a[i]);
        for(j=2;j*j<=p;j++)
        {
            while(p%j==0)
            {
               prime_fac[a[i]].pb(j);
               p/=j;
            }
        }
        if(p>1)
            prime_fac[a[i]].pb(p);
    }
    for(ll i : s)
    {
        cout<<i<<"=";
        for(ll j:prime_fac[i])
            cout<<j<<" ";
        cout<<endl;
    }
}
