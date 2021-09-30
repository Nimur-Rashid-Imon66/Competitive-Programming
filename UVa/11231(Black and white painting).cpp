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

void slove()
{
    ll r, c, x;
    while(1)
    {
       cin >> r >> c >> x;
       if(r<8||c<8)
           break;
        r = r - 8 + 1;
        c = c - 8 + 1;
        //cout << r*c << " ";
        if (x==1)
        {
            ll z = r * c;
            double t = 2.00;
            ll ans = ceil(z / t);
            cout << ans << nl;
        }
        else
        {
            ll z = r * c;
            z = z / 2*1LL;
            cout << z << endl;
        }
         
    }


    
}
int main(){
fastIO
//testcase
slove();
return 0;
}
