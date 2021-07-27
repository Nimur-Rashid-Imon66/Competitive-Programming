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

int phi[1000005];
ll sum[1000005] ;
bool vis[1000005];
ll sum_each_lavel[1000005];
void find_phi()
{
     for(int i=1;i<=1000005;i++){
        phi[i]=i;
    }
    for(int i=2;i<=1000005;i++){
        if(vis[i]){
            continue;
        }
        for(int j=i;j<=1000005;j+=i){
            vis[j]=true;
            phi[j]/=i;
            phi[j]*=(i-1);
        }
    }
}

void  sumGCD()
{
   for(int i =1;i<=1000005;i++)
   {
        for(int j=i;j<=1000005;j+=i)
        {
            if(i!=j)
            sum_each_lavel[j] += i*phi[j/i] ;
        }

   }
   for(int i =1;i<=1000005;i++)
    sum[i] += sum[i-1] + sum_each_lavel[i];
}
void slove()
{
    find_phi();
    sumGCD();
    int n; 
    while(1)
    {
        cin>>n;
        if(!n) return;
        cout<<sum[n]<<nl;

    }
}

Bismillah
{
    sublime
    //testcase;
      slove();     
    return 0;
}








