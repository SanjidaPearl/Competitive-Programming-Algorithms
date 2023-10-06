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
bool status[20000009];
vector<ll>v;
void sieve()
{
    ll i,j,total=0,val;
    for(i=2;i<Max;i++)
    {
        status[i]=0;
    }
    val=sqrt(Max)+1;
    for(i=2;i<=val;i++)
    {
        if(status[i]==0)
        {
            for(j=2*i;j<Max;j+=i)
            {
                status[j]=1;
            }
        }
    }
    for(i=2;i<Max;i++)
    {
        if(!status[i])
        {
            v.pb(i);
        }
    }
}
int main()
{
    ll n,i,t,r;
    sieve();
    cout<<v.size()<<endl;
}



