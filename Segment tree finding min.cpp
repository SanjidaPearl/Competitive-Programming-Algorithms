 ///Bismillahir-Rahmanir-Rahim
#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int llu;
typedef double dl;
#define f1(i,n) for(i=1;i<=n;i++)
#define f(i,n) for(i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
#define Max 100005
int a[Max],tree[3*Max];
int init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=a[b];
        return a[b];
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    int x=init(left,b,mid);
    int y=init(right,mid+1,e);
    tree[node]=min(x,y);///
    return tree[node];
}
void update(int node,int b,int e,int i,int newvalue)
{
    if(i>e||i<b)
        return;
    if(b>=i&&e<=i)
    {
        tree[node]=newvalue;
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,newvalue);
    update(right,mid+1,e,i,newvalue);
    tree[node]=min(tree[left],tree[right]);///
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)
     return INT_MAX;///
     if(b>=i&&e<=j)
        return tree[node];
     int left=2*node;
     int right=2*node+1;
     int mid=(b+e)/2;
     int x=query(left,b,mid,i,j);
     int y=query(right,mid+1,e,i,j);
     return min(x,y);
}
int main()
{
    int i,j,n,t,q,k,s,g,h,l,r,p;
    scanf("%d",&t);
    for(g=1;g<=t;g++)
    {
        scanf("%d%d",&n,&q);
        f1(i,n)
        scanf("%d",&a[i]);
        init(1,1,n);
        printf("Case %d:\n",g);
        f(i,q)
        {
            scanf("%d",&s);
            if(s==1){
             scanf("%d%d",&l,&r);
             p=query(1,1,n,l,r);
             printf("%d\n",p);
            }
            else if(s==2)
            {
                scanf("%d%d",&l,&r);
                a[l]=r;
                update(1,1,n,l,a[l]);
            }
        }
    }
}



