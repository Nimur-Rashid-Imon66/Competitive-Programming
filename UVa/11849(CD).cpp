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
    int n, m;
    while(1)
    {
        cin >> n >> m;
        if(!n&&!m) break;
        int x = n + m;
        map<int,int> s;    
        for (int i = 0; i < x;i++)
        {
            int z;
            cin >> z;
            s[z]++;
        }
        int cnt = 0;
        for (auto it = s.begin(); it != s.end();it++)
        {
            if(it->ss==2)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    
}
int main(){
fastIO
 //testcase
slove();
return 0;
}
