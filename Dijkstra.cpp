//Bismillahir-Rahmanir-Rahim
#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int llu;
typedef double dl;
#define f1(i,n) for(i=1;i<=n;i++)
#define f(i,n) for(i=0;i<n;i++)
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
#define pii pair<ll,ll>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
using namespace std;
vector<pii>v[100001];
ll dis[100001],p[100001];
int main()
{
    ll t,n,i,j,k,m,q,w,h,l,r,x;
    k=1e18;
     cin>>n>>m;
     ll n1,n2,c1,c2;
     vector<ll>ans;
     f1(i,m)
     {
         cin>>l>>r>>w;
         v[l].pb(mp(w,r));
         v[r].pb(mp(w,l));
     }
     f(i,100001)
      dis[i]=k;
     priority_queue<pii,vector<pii>,greater<pii>>pq;
     dis[1]=0,p[1]=-1;
     pq.push(mp(0,1));
     while(!pq.empty())
     {
         n1=pq.top().ss;
         c1=pq.top().ff;
         pq.pop();
         if(dis[n1]<c1)
            continue;
         else{
            for(i=0;i<v[n1].size();i++)
            {
                n2=v[n1][i].ss;
                c2=v[n1][i].ff;
                if(dis[n2]>dis[n1]+c2)
                {
                    dis[n2]=dis[n1]+c2;
                    p[n2]=n1;
                    pq.push(mp(dis[n2],n2));
                }
            }
         }
     }
     if(dis[n]==k)
        cout<<-1<<endl;
     else{
        while(n!=-1)
        {
            ans.pb(n);
            n=p[n];
        }
        rv(ans);
        f(i,ans.size())
         cout<<ans[i]<<" ";
         cout<<endl;
     }
}
