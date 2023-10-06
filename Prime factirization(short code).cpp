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
vector<ll>pfact(ll n)
{
    ll i;
    vector<ll>v;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0){
        while(n%i==0)
        {
            n/=i;
        }
        v.pb(i);
        }
    }
    if(n!=1) v.pb(n);
    return v;
}
int main()
{
     ll n,i,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>v2 =pfact(n);
        for(i=0;i<v2.size();i++)
            cout<<v2[i]<<" ";
        cout<<endl;
    }
}

