#include<bits/stdc++.h>
#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define nl endl
#define testcase {ll t;cin>>t;while(t--){slove();}}
#define size 1000000
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
       int cnt=0,z=n;
       for(int i=2;i*i<=n;i++)
       {
           if(n%i==0)
           {
              while(n%i==0)
                n/=i;
              cnt++;
           }
       }
       if(n>1) cnt++;
       cout<<z<<" : "<<cnt<<nl;
   }
}

int main()
{
    //testcase
    slove();
    return 0;
}
