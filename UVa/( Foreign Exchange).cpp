             /* بسم الله الرحمن الرحيم  */
//Rabbi Jidni Ilma
//Nimur Rashid Imon


#include <bits/stdc++.h>
#define pi             (3.141592653589)
#define mod            1000000007
#define nl             endl
#define pb             push_back
#define ff             first
#define ss             second
#define testcase       {ll t;cin>>t;while(t--){slove();}}
#define all(c)         c.begin(), c.end()
#define rall(c)         c.rbegin(), c.rend()
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
    int n;
    while (1)
    {
        map<pair<int, int>, int> mp;
        cin >> n;
        if (!n)
            break;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            auto it = mp.find({b, a});
            if( it == mp.end())
                mp[{a, b}]++;
            else
            {
                if(it->ss==1)
                 mp.erase(it);
                 else
                  {
                      int x = it->ss;
                      x--;
                      it->ss = x;
                  }
            }
        }
        int f = 1;
        if(!mp.empty())
            f = 0;
        if (f)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}
int main(){
fastIO
//testcase
slove();
return 0;
}






