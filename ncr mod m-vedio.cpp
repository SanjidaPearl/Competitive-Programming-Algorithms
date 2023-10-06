///Bismillahir-Rahmanir-Rahim
#include<bits/stdc++.h>
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
using namespace std;
///There are N children and K toffees. K<N..
///Count the number of ways to distribute toffee-eta permutation na combination..
///Among N students such that students get 1 toffee only
///nCk , %M , M=1e9+7
/// N < 10^6 , K<N<10^6
///Q <10^5
///ncr = n!/(( n - r )! * r!)
ll m=1e9+7;
ll binexp(ll a,ll b,ll m)///(a^b)%m
{
    ll res=1;
    while(b>0){
        if(b&1){
            res=(res*a)%m;
        }
        a=(a*a)%m;
        b>>=1;
    }
    return res;
}
ll fact[Max+2];
int main()
{
    //fast;
    ll t,n,i,j,k,x,y,d,r,l,l1,r1,p,ans,mx,q;
     fact[0]=1;
     f1(i,Max) {
       fact[i]=(fact[i-1]*i)%m;
     }
     cin>>t;
     while(t--){
        cin>>n>>r;
       ans=fact[n];
       d=(fact[n-r]*fact[r])%m;
       ans=(ans*binexp(d,m-2,m))%m;
      cout<<ans<<endl;
     }
}

