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
    while (1)
    {
        ll node, edge;
        vector<ll> adj[10050];
        queue<int> qt;
        cin >> node;
        if (!node)
            break;
        int vis[10050] = {0};
        cin >> edge;
        for (ll i = 0; i < edge; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        int src = 0;
        qt.push(src);
        vis[src] = 1;
        bool f = 1;
        while (!qt.empty()&&f)
        {
            ll u = qt.front();
            qt.pop();
            for (auto v : adj[u]) // u ---> v
            {
                if (vis[v])
                {
                    if (vis[v] == vis[u])
                    {
                        cout << "NOT BICOLORABLE." << nl;
                        f = 0;
                        break;
                    }
                    continue;
                }
                else if (vis[u] == 1)
                    vis[v] = 2;
                else if (vis[u] == 2)
                    vis[v] = 1;
                qt.push(v);
            }
        }
        if (f)
            cout << "BICOLORABLE." << nl;
    }
}
int main(){
fastIO
//testcase
solve();
return 0;
}
