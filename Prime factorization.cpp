//Bismillahir-Rahmanir-Rahim
#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int llu;
typedef double dl;
#define f1(i,n) for(i=1;i<=n;i++)
#define f(i,n) for(i=0;i<n;i++)
#define Max 100009
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
bool status[1100002];
vector<int>v,v1;
int v_len;
void sieve()
{
    int i,j,total=0,val;
    for(i=2;i<=Max;i++)
    {
        status[i]=0;
    }
    val=sqrt(Max);
    for(i=2;i<=val;i++)
    {
        if(status[i]==0)
        {
            for(j=2*i;j<=Max;j+=i)
            {
                status[j]=1;
            }
        }
    }
    v.pb(2);
    for(i=3;i<=Max;i+=2)
    {
        if(status[i]==0)
        {
            v.pb(i);
        }
    }
    v_len=v.size();
}
void primefacto(ll n)
{
    ll i,s,m=1,k;
    for(i=0;i<v_len && v[i]*v[i]<=n;i++)
    {
        if(n%v[i]==0)
        {
            v1.pb(v[i]);
            while(n%v[i]==0)
            {
                n/=v[i];
                if(n==0||n==1)
                    break;
            }
        }
    }
    if(n!=1) v1.pb(n);
}
int main()
{
     ll n,i,t;
    sieve();
    cin>>t;
    while(t--)
    {
        cin>>n;
        primefacto(n);
        for(i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";
        cout<<endl;
        v1.clear();
    }
}
