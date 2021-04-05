#include<bits/stdc++.h>
#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define nl endl
#define testcase {ll t;cin>>t;while(t--){slove();}}

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
bool prime[20000010];
ll twin[20000010];

void slove()
{
    ll n;
    while(cin>>n)
    {
        cout<<"("<<twin[n]<<", "<<twin[n]+2<<")"<<nl;
    }

}

int main()
{
    memset(prime, true, sizeof(prime));
    for(ll p=2; p*p<=20000010; p++)
        if(prime[p]==true)
            for(ll i=p*p; i<=20000010; i+=p)
                prime[i]=false;
                ll k=1;
    for(ll i=3; i<=20000010; i++)
        if(prime[i]&&prime[i+2])
        {
           twin[k++]=i;
        }
    slove();
    return 0;
}
