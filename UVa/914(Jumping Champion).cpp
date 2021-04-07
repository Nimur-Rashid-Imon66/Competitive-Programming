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
bool prime[size];

void slove()
{
    int l,u;
    cin>>l>>u;
    int arr[201]= {0};
    int dis1,f=1;
    for(int i=l; i<=u; i++)
        if(prime[i])
        {
            if(f)
            {
                dis1=i;
                f=0;
            }
            else
            {
                arr[abs(dis1-i)]++;
                dis1=i;
            }
        }
    int maxi=0,flag=0;
    int maxipos=-1,flagpos;
    for(int i=1; i<=200; i++)
        if(arr[i]>maxi)
        {
            maxi = arr[i] ;
            flagpos = maxipos;
            maxipos = i ;

        }

    for(int i=1; i<=200; i++)
        if(maxi==arr[i]&&i!=maxipos)
        {
            flagpos=0;

        }
    if(flagpos==0||maxipos==flag)
    {
        cout<<"No jumping champion"<<nl;

    }
    else
        cout<<"The jumping champion is "<<maxipos<<nl;
}

int main()
{
    fasterIO
    memset(prime, true, sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for(int p=2; p*p<=size; p++)
        if(prime[p]==true)
            for(int i=p*p; i<=size; i+=p)
                prime[i]=false;
    testcase
    return 0;
}
