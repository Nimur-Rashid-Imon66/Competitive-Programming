#include <bits/stdc++.h>
#define pi             (3.141592653589)
#define mod            1000000007
#define nl             endl
#define pb             push_back
#define ff             first
#define ss             second
#define testcase       {ll t;cin>>t;while(t--){slove();}}
#define all(c)         c.begin(), c.end()
#define min3(a, b, c)  min(c, min(a, b))
#define min4(a, b,c,d) min(d, min(c, min(a, b)))
#define rrep(i, n)     for(int i=n-1;i>=0;i--)
#define rep(i,n)       for(int i=0;i<n;i++)
#define fastIO ios::sync_with_stdio(0); cin.tie(0); 
typedef long long ll;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;


ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}
ll BigMod(ll b, ll p, ll m) {if (p == 0) return 1;ll ans = BigMod(b, p/2, m);ans = ( ans * ans ) % m;if (p % 2 == 1) ans = (ans * b) % m;return ans;}
ll binarySearch(ll arr[], ll l, ll r, ll x) {if (r >= l){ll mid = l+(r-l) / 2;if (arr[mid] == x) return mid;if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);return binarySearch(arr, mid+1, r, x);}return -1 ;}
ll ModInv(ll a, ll m){return BigMod(a, m-2, m);}
ll base_to_dec(ll base , string x)
 {
    ll da=0;
    ll i = x.size() - 1;
    int j = 0;
    while(i>=0)
    {
        int z = (x[j] - '0');
        da += z * Pow(base, i);
        i--;
        j++;
    }
    return da;
 }


void slove()
{
    ll x;
    while(1)
    {
        cin >> x;
        if(x==0) return;
        ll y = sqrt(x);
        if(y*y == x)
            cout << "yes" << nl;
        else
            cout << "no" << nl;
    }
}
int main(){
fastIO
//testcase
slove();
return 0;
}
