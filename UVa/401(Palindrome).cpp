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
bool ispalindrome(string s)
{
    int len = s.length();
    for(int i = 0,j=(len-1); i < len/2;i++,j--)
       if(s[i]!=s[j]) return false;
    return true;
}
map<char, char> miror;
void Miror()
{
    miror.insert({'A','A'});
    miror.insert({'E','3'});
    miror.insert({'H','H'});
    miror.insert({'I','I'});
    miror.insert({'J','L'});
    miror.insert({'L','J'});
    miror.insert({'M','M'});
    miror.insert({'O','O'});
    miror.insert({'S','2'});
    miror.insert({'T','T'});
    miror.insert({'U','U'});
    miror.insert({'V','V'});
    miror.insert({'W','W'});
    miror.insert({'X','X'});
    miror.insert({'Y','Y'});
    miror.insert({'Z','5'});
    miror.insert({'1','1'});
    miror.insert({'2','S'});
    miror.insert({'3','E'});
    miror.insert({'5','Z'});
    miror.insert({'8','8'});
}
bool ismiror(string s)
{
    int len  = s.length();
   for (int i = 0,j=len-1; i <= len/2; i++,j--)
   {
      if(miror[s[i]]!=s[j])
          return false;
   }
    return true;
}
void slove()
{
    string s;
    while(cin>>s)
    {
        bool p = ispalindrome(s);
        bool m = ismiror(s);
        if(p&&m)
            cout << s << " -- is a mirrored palindrome." << nl<<nl;
        else if(p&&!m)
             cout << s << " -- is a regular palindrome." << nl<<nl;
        else if(!p&&m)
              cout << s << " -- is a mirrored string." << nl<<nl;
        else
            cout << s << " -- is not a palindrome." << nl<<nl;
    } 
}
int main(){
    fastIO
    //testcase
    Miror();
    slove();
    return 0;
}
