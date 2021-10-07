#include <bits/stdc++.h>
#define pi             (3.141592653589)
#define mod            1000000007
#define nl             endl
#define pb             push_back
#define ff             first
#define ss             second
#define testcase       {ll t;scanf("%lld",&t);while(t--){slove();}}
#define all(c)         c.begin(), c.end()
#define rall(c)         c.rbegin(), c.rend()
#define min3(a, b, c)  min(c, min(a, b))
#define min4(a, b,c,d) min(d, min(c, min(a, b)))
#define rrep(i, n)     for(int i=n-1;i>=0;i--)
#define rep(i,n)       for(int i=0;i<n;i++)
#define fastIO ios::sync_with_stdio(0); cin.tie(0); 
typedef long long ll;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;


bool prime[1000006];
int presum[1000006];
vector<ll> P;
void seive()
{
    memset(prime, true, sizeof(prime));
    memset(presum, true, sizeof(presum));
    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= 1000006; p++)
        if (prime[p] == true)
        {
            for (int i = p * p; i <= 1000006; i += p)
                prime[i] = false;
        }
    presum[0] = presum[1] = 0;
    for (int i = 2; i < 1000006; i++)
    {
        presum[i] = presum[i - 1];
        if (prime[i] == true)
        {
            int digitsum = 0;
            ll x = i;
            while (x)
            {
                digitsum += x % 10;
                x /= 10;
            }
            if (prime[digitsum])
                presum[i]++;
        }
    }
}

void slove()
{
    ll l, r;
    scanf("%lld %lld", &l,&r);
    cout << presum[r] - presum[l-1] << nl;
    
}
int main(){
  fastIO
  seive();
  testcase
      //slove();
      return 0;
}
