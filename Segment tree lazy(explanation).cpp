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
#define c(x) cout<<x;
using namespace std;
const ll mx = 200000;
ll a[mx];
        ll tree[4 * mx];
        ll lazy[4 * mx];///sum ছাড়াও নিচে অতিরিক্ত কত যোগ হচ্ছে সেটা রাখবো prop এ

void build(ll node, ll l, ll r) {
            if (l == r) {
                tree[node] = a[l];
                lazy[node] = 0;
                return;
            }

            ll mid = (l + r) / 2;
            ll lson = 2 * node;
            ll rson = 2 * node + 1;

            build(lson, l, mid);
            build(rson, mid + 1, r);

            tree[node] = tree[lson] + tree[rson];
            lazy[node] = 0;
        }

        void propagate(ll node, ll l, ll r) {
            if (lazy[node] > 0) {
                ll cnt = r - l + 1;
                tree[node] += cnt * lazy[node];

                ll lson = 2 * node;
                ll rson = 2 * node + 1;

                if (rson < 4 * mx) {
                    lazy[lson] += lazy[node];
                    lazy[rson] += lazy[node];
                }

                lazy[node] = 0;
            }
        }

        ll query(ll node, ll l, ll r, ll L, ll R) {
            ll mid = (l + r) / 2;
            ll lson = 2 * node;
            ll rson = 2 * node + 1;

            propagate(node, l, r);

            if (r < L or R < l) return 0;
            if (L <= l and r <= R) return tree[node];

            ll q1 = query(lson, l, mid, L, R); ///প্রপাগেট ভ্যালু বয়ে নিয়ে যাচ্ছে carry ভ্যারিয়েবল
            ll q2 = query(rson, mid + 1, r, L, R);

            return q1 + q2;
        }

        void update(ll node, ll l, ll r, ll L, ll R, ll x) {
            ll mid = (l + r) / 2;
            ll lson = 2 * node;
            ll rson = 2 * node + 1;

            propagate(node, l, r);

            if (r < L or R < l) return;
            if (L <= l and r <= R) {///নোডের রেঞ্জ আপডেটের রেঞ্জের ভিতরে
                tree[node] += (r - l + 1) * x;///নিচে নোড আছে e-b+1 টি, তাই e-b+1 বার x যোগ হবে এই রেঞ্জে
                if (rson < 4 * mx) {
                    lazy[lson] += x;///নিচের নোডগুলোর সাথে x যোগ হবে
                    lazy[rson] += x;///নিচের নোডগুলোর সাথে x যোগ হবে
                }

                return;
            }

            update(lson, l, mid, L, R, x);
            update(rson, mid + 1, r, L, R, x);

            tree[node] = tree[lson] + tree[rson];
        }   ///উপরে উঠার সময় পথের নোডগুলো আপডেট হবে
            ///বাম আর ডান পাশের সাম ছাড়াও যোগ হবে নিচে অতিরিক্ত যোগ হওয়া মান

int main()
{
    fast
    ll t,n,i,j,k,m,r,l,ans,mx,c,g,q,x,d,y,p;
    cin>>t;
    while(t--)
    {
        memset(tree, 0, sizeof tree);
        memset(lazy,-1, sizeof lazy);

        cin>>n>>k;
        ll b[n+1];
        f1(i,n) a[i]=0;
        build(1,1,n);
      f1(i,k)
      {
        cin>>p;
        if(p==0)
        {
            cin>>x>>y>>d;
            update(1,1,n,x,y,d);
        }
        else{
            cin>>x>>y;
            ans=query(1,1,n,x,y);
            cout<<ans<<endl;
        }
      }
    }
}





