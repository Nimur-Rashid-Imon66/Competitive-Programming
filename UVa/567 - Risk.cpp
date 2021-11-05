/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */

#include <bits/stdc++.h>
#define pi             (3.141592653589)
#define mod            1000000007
#define nl             endl
#define pb             push_back
#define ff             first
#define ss             second
#define testcase       {ll t;cin>>t;while(t--){solve();}}
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


void solve()
{
    int k;
    int c = 0;
    while (cin >> k)
    {
        c++;
        cout << "Test Set #" << c << nl;
        vector<ll> adj[100000];
        int z = 1;
        while (z <= 19)
        {
            if (z != 1)
                cin >> k;
            for (int i = 1; i <= k; i++)
            {
                ll u = z, v;
                cin >> v;
                adj[u].pb(v);
                adj[v].pb(u);
            }
            z++;
        }
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int src, des;
            cin >> src >> des;
            if(src ==des)
            {
                 //printf("%2d to %2d:%2d", src, dec, 0);
                 cout<<setw(2)<<src<<" to "<<setw(2)<<des<<":"<<setw(2)<<0<<endl;
                 continue;
            }
            queue<int> qt;
            int vis[100] = {0};
            int dist[100] = {0};
            qt.push(src);
            vis[src] = 1;
            dist[src] = 0;
            int cnt = 0;
            bool f = 1;
            while (!qt.empty()&&f)
            {
                ll u = qt.front();
                qt.pop();
                for (auto v : adj[u]) // u ---> v
                {
                    if(v==des)
                    {
                        if(vis[v])
                            cnt = dist[v];
                        else
                            cnt = dist[u] + 1;
                        f = 0;
                        break;
                    }
                    if (vis[v]) continue;
                    vis[v] = 1;
                    dist[v] = dist[u] + 1;
                    qt.push(v);
                }
            }
            //printf("%2d to %2d: %2d", src, des, cnt);
             cout<<setw(2)<<src<<" to "<<setw(2)<<des<<":"<<setw(2)<<cnt<<endl;
        }
        cout << nl;
    }
}
int main(){
fastIO
//testcase
solve();
return 0;
}
