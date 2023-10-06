///Bismillahir-Rahmanir-Rahim
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
#define c(x) cout<<x;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>///for unique
#define ordered_set2 tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>///for multiple
using namespace std;
using namespace __gnu_pbds;
int main()
{
    //fast
    ll t,n,i,j,k,m,r,l,ans,mx,c,g,q,p,u,v;
    cin>>n;
    ll a[n];
    f(i,n) cin>>a[i];
    ll to_find;
    cin>>to_find;
    ll low=0,high=n-1,mid;
    while(low<high)
    {
        mid=(low+high)/2;
        if(a[mid]<to_find)
        {
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    if(a[low]==to_find)
      cout<<low<<endl;
    else if(a[high]==to_find)
      cout<<high<<endl;
    else
      cout<<"Not found"<<endl;
}





