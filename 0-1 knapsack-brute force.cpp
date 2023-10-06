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
ll knapsack(ll w,ll wt[],ll val[],ll n)
{
    ll i,j;
    ll k[n+1][w+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=w;j++)
        {
            if(i==0||j==0)
                k[i][j]=0;
            else if(wt[i-1]<=j)
                k[i][j]=max(k[i-1][j],k[i-1][j-wt[i-1]]+val[i-1]);
            else k[i][j]=k[i-1][j];
        }
    }
    return k[n][w];
}
int main()
{
    ll t,n,i,j,l,r,w,ans;
        cin>>n;
        ll val[n],wt[n];
    f(i,n)
    {
       cin>>val[i]>>wt[i];
    }
    cin>>w;
    ans=knapsack(w,wt,val,n);
    cout<<ans<<endl;
}



