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
#define Max 200005
int a[Max],tree[3*Max];
void init(int node,int b,int e)
{
    if(b==e){
        tree[node]=a[b];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
     init(left,b,mid);
     init(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}
void update(int node,int b,int e,int i,int newvalue)
{
    if(i>e||i<b)
      return;
    if(b>=i&&e<=i){
        tree[node]=newvalue;
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,newvalue);
    update(right,mid+1,e,i,newvalue);
    tree[node]=tree[left]+tree[right];
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b) return 0;
    if(b>=i&&e<=j)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int x=query(left,b,mid,i,j);
    int y=query(right,mid+1,e,i,j);
    return x+y;
}
int main()
{
    int i,j,n,t,q,k,s,g,h,l,p;
        scanf("%d%d",&n,&q);
        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        init(1,1,n);
       for(i=0;i<q;i++)
       {
           scanf("%d",&g);
            if(g==1)
            {
                scanf("%d",&h,&l);
                 update(1,1,n,h,l);
            }
            else if(g==2)
            {
                scanf("%d%d",&h,&l);
                h++;
                a[h]=a[h]+l;
                update(1,1,n,h,a[h]);
            }
                scanf("%d%d",&h,&l);
                h++,l++;
                printf("%d\n",query(1,1,n,h,l));
       }
}
