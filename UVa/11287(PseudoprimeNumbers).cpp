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

//set<int>prime;
bool isprime(int x)
{
    //memset(prime, true, sizeof(prime));
    //prime[0] = prime[1] = false ;
    for(int p=2; p*p<=x; p++)
       {
           if(x%p==0)
               return 0;
       }
       return 1;
}

void slove()
{
    int p, a;
    while(1)
    {
        cin >> p >> a;
        if(!p&&!a)
            return;
        if(isprime(p))
            cout << "no" << nl;
        else
        {
           if(BigMod(a, p,p)  == a% p)
               cout << "yes" << nl;
            else
            cout<< "no" << nl;
        }
        
    }
}
int main(){
    fastIO
    //testcase
    //seive();
    slove();
    return 0;
}
