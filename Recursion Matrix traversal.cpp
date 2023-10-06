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
char a[100][100];
ll vis[100][100];
ll b=0,n,m;
///In the matrix a[n][m] B is the destination and X is obstacle..
void check(ll i,ll j)
{
    if(i<0||j<0||i>=n||j>=m||vis[i][j]==1) return;
    else if(a[i][j]=='B')
    {
        vis[i][j]=1;
        b=1;
    }
    else if(a[i][j]=='X') return;
    else{
        vis[i][j]=1;
        check(i-1,j);
        cout<<"UP "<<i<<" "<<j<<endl;
        check(i,j-1);
        cout<<"Left "<<i<<" "<<j<<endl;
        check(i,j+1);
        cout<<"RIGHT "<<i<<" "<<j<<endl;
        check(i+1,j);
        cout<<"DOWN "<<i<<" "<<j<<endl;
    }
}
int main()
{
    ll i,t,j,no,ed,u,v,x=0,ans=0,src1,src2;
    cin>>n>>m;
    f(i,n)
    {
        f(j,m) cin>>a[i][j];
    }
    cin>>u>>v;
    check(u,v);
    if(b) cy;
    else cn;
}


