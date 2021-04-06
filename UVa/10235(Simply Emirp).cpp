#include<bits/stdc++.h>
#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define nl endl
#define testcase {ll t;cin>>t;while(t--){slove();}}
#define size 1299709+5
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
bool prime[size+1];

void slove()
{
    ll n;
    while(cin>>n)
    {
        //if(!n) break;

        if(prime[n])
        {
            string s=to_string(n);
            reverse(s.begin(),s.end());
            ll x=stol(s);
            if(!prime[x]||x==n) cout<<n<<" is prime."<<nl;
            else cout<<n<<" is emirp."<<nl;
        }
        else
        {
           cout<<n<<" is not prime."<<nl;
        }
    }
}

int main()
{
    //testcase
    memset(prime, true, sizeof(prime));
    for(int p=2; p*p<=size; p++)
        if(prime[p]==true)
            for(int i=p*p; i<=size; i+=p)
                prime[i]=false;
    slove();
    return 0;
}
