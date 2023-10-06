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
ll vis[5000][5000],a[5000][5000];
ll r,c;
ll fx[]={1,-1,0,0};
ll fy[]={0,0,-1,1};
ll bfs(pair<ll,ll>src)
{
    ll n,m,cnt=1;
    vis[src.ff][src.ss]=1;
    queue<pair<ll,ll>>q;
    pair<ll,ll>p,x;
    q.push(src);
    ll i;
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        for(i=0;i<4;i++)
        {
            n=fx[i]+x.ff;
            m=fy[i]+x.ss;
            if(n>=0 && m>=0 && n<r && m<c && vis[n][m]==0 && a[n][m]!=2)
            {
                vis[n][m]=1;
                cnt++;
                p.first=n;
                p.second=m;
                q.push(p);
            }
        }
    }
    return cnt;
}
int main()
{
    ll i,t,j,no,n,m,ed,u,v,x=0,ans=0,src1,src2;
    char ch;
    cin>>t;
    for(x=1;x<=t;x++){
            memset(vis,0,sizeof(vis));
        cin>>c>>r;
        pair<ll,ll>p;
        f(i,r)
        {
            f(j,c)
             {
                 cin>>ch;
                 if(ch=='.')
                    a[i][j]=1;
                 else if(ch=='#')
                    a[i][j]=2;
                 else if(ch=='@')
                    a[i][j]=0,p.first=i,p.second=j;
             }
        }
        ans=bfs(p);
        cout<<"Case "<<x<<": "<<ans<<endl;
    }
}

