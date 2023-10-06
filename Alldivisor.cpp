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
vector<ll>divisor[100005]; ///10^5 porjonto korte parbo..
int main()
{
   // fast
    ll t,n,i,j,k,l,l1,x,y,m,h,r,mn,mx,g,p,q,ans=0;
    cin>>n;
    for(i=2;i<n;i++)
    {
        for(j=i;j<n;j+=i)
        {
            divisor[j].pb(i);
        }
    }
    for(i=1;i<n;i++)
    {
        cout<<i<<" = ";
        for(ll d:divisor[i])
            cout<<d<<" ";
        cout<<endl;
    }

}

