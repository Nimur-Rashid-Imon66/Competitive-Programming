#include<bits/stdc++.h>
#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define nl endl
#define testcase {ll t;cin>>t;while(t--){slove();}}
#define Bismillah int main()
#define sublime code(); 
#define YES cout<<"YES"<<nl;
#define NO cout<<"NO"<<nl;
#define Yes cout<<"Yes"<<nl;
#define No cout<<"No"<<nl;

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

ll BigMod(ll b, ll p, ll m) {if (p == 0) return 1;ll ans = BigMod(b, p/2, m);ans = ( ans * ans ) % m;if (p % 2 == 1) ans = (ans * b) % m;return ans;}

ll binarySearch(ll arr[], ll l, ll r, ll x) {if (r >= l){ll mid = l+(r-l) / 2;if (arr[mid] == x) return mid;if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);return binarySearch(arr, mid+1, r, x);}return -1 ;}

ll ModInv(ll a, ll m){return BigMod(a, m-2, m);}

void code()
{
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

ll egcd(ll a,ll b,ll &x,ll &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a ;
    }
    ll x1,y1;
    ll ans =egcd(b,a%b,x1,y1) ;
    x = y1;
    y = x1 - (a/b)*y1 ;
    return ans;
}
void slove()
{
    ll x,y;
    ll a,b;
    while(cin>>a>>b)
    {
        ll ans = egcd(a,b,x,y) ;
        cout<<x<<" "<<y<<" "<<ans<<nl;
   }
}

Bismillah
{
    sublime
    //testcase
    slove();
    return 0;
}
