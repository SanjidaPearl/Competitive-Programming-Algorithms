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
double eps = 1e-7;///decimal er por 7 ta ghor chai
int main()
{
    //fast
    double x,lo,hi,mid;
    cin>>x;
    lo=1,hi=x;
    while(hi-lo > eps)
    {
        mid=(lo+hi)/2;
        if(mid*mid < x)///cube nth ber korte
                      ///chaile mid k totobar gun
        {
            lo = mid;
        }
        else{
            hi = mid;
        }
    }
    cout<<setprecision(10)<<lo<<" "<<hi<<endl;
}





