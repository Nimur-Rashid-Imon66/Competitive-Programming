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
    while(1)
    {
        ll n;
        cin>>n;
        if(!n) break;
        if(prime[n]) cout<<0<<nl;
        else
        {
            int preprime,postprime;
            for(int i=n-1;; i--)
            {
                if(prime[i])
                {
                    preprime=i;
                    break;
                }
            }
            for(int i=n+1;; i++)
                if(prime[i])
                {
                    postprime=i;
                    break;
                }
            cout<<postprime-preprime<<nl;
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
