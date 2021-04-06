#include<bits/stdc++.h>
#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define nl endl
#define testcase {ll t;cin>>t;while(t--){slove();}}
#define size 100000000
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
bool prime[size];

void slove()
{
    ll n;
    while(cin>>n)
    {
        if(n%2==1)
        {
            if(prime[n-2])
                cout<<n<<" is the sum of 2 and "<<n-2<<"."<<nl;
            else
                cout<<n<<" is not the sum of two primes!"<<nl;
        }
        else
        {
            ll x=n/2-1;
            while(!prime[x]||!prime[n-x])
            {
                x--;
                if(x==1) break;
            }
            ll y=n-x;
            if(x!=y&&x>2&&(y-x)>0&&y>x)
                cout<<n<<" is the sum of "<<x<<" and "<<n-x<<"."<<nl;
            else
                cout<<n<<" is not the sum of two primes!"<<nl;
        }
    }
}

int main()
{
    //testcase
    memset(prime, true, sizeof(prime));
    prime[0]=false;
    prime[1]=false;

    for(int p=2; p*p<=size; p++)
        if(prime[p]==true)
            for(int i=p*p; i<=size; i+=p)
                prime[i]=false;
    slove();
    return 0;
}
