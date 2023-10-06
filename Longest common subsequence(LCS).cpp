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
int LSC(string s1,string s2,int n,int m)
{
    int L[n+1][m+1],i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0||j==0)
                L[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                L[i][j]=L[i-1][j-1]+1;
            else L[i][j]=max(L[i-1][j],L[i][j-1]);
        }
    }
    return L[n][m];
}
int main()
{
    //fast;
    ll t,n,i,j,k,x,y,d,m,r,l,l1,r1,p,ans,mx,q;
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        n=s1.size(),m=s2.size();
        ans = LSC(s1,s2,n,m);
        cout<<ans<<endl;
    }
}













