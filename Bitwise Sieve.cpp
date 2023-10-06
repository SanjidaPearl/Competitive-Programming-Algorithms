//Bismillahir-Rahmanir-Rahim
#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int llu;
#define f1(i,n) for(i=1;i<=n;i++)
#define f(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define mx 1000000009
using namespace std;
ll status[mx/32+2];
vector<ll>prime;
bool check(ll n,ll pos)
{
    return n & (1<<pos);
}
ll Set(ll n,ll pos)
{
    n=n | (1<<pos);
    return n;
}
void bitsieve()
{
    ll i,j,sqrtMx;
    sqrtMx=sqrt(mx);
    for(i=3; i<=sqrtMx; i+=2)
    {
        if(check(status[i>>5],i&31)==0)
        {
            for(j=i*i; j<=mx; j+=(i<<1)) ///j+=(i<<1) => j+=2*i
            {
                status[j>>5]=Set(status[j>>5],j&31);
            }
        }
    }
    prime.push_back(2);
    for(i=3; i<=mx; i+=2)
    {
        if(check(status[i>>5],i&31)==0)
            prime.push_back(i);
    }
}
int main()
{
     ll n,i,r,t;
     bitsieve();
     cout<<prime.size()<<endl;
}



