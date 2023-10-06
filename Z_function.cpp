//Bismillahir-Rahmanir-Rahim
#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int llu;
#define f1(i,n) for(i=1;i<=n;i++)
#define f(i,n) for(i=0;i<n;i++)
#define Max 20000000
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<ll,ll>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
using namespace std;
vector<ll>z_fun(string s)
{
    ll n=s.size();
    vector<ll>z(n,0);
    ll l=0,r=0,i;
    for(i=1;i<n;i++)
    {
        if(l<=r)
        {
            z[i]=min(r-l,z[i-l]);
        }
        while(i+z[i]<n && s[z[i]]==s[i+z[i]])
            z[i]++;
        if(i+z[i]>r)
        {
            l=i;
            r=i+z[i]-1;
        }
    }
    return z;
}
int main()
{
    ll t,n,i,j,l,x,r,k,w,m,q,g;
    cin>>t;
    while(t--){
        string s1,s2,s;
        cin>>s1>>s2;
        s=s1+"#"+s2;
        vector<ll>z=z_fun(s);
        n=s.size();
        vector<ll>v;
        f(i,n)
        {
            if(z[i]==s1.size())
            {
                v.pb(i-s1.size()-1);
            }
        }
        cout<<v.size()<<endl;
        f(i,v.size())
        cout<<v[i]<<" ";
        cout<<endl;
    }
}

