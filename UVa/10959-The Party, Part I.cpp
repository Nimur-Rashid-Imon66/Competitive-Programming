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

ll node,edge;
vector<ll> adj[1500];
void graph_input()
{
  
   for (ll i = 0; i < edge;i++)
   {
       ll u, v;
       cin >> u >> v;
       adj[u].pb(v);
       adj[v].pb(u);
   }
}
int vis[100005];
int dist[100005];

void BFS(int src)//source come from main BFS(int src)
{
    queue<int> node; 
    node.push(src);
    vis[src] = 1;
    dist[src] = 0;
    while (!node.empty())
    {
        int u = node.front();
        node.pop();
         for(auto v : adj[u]) // u ---> v
         {
             if(vis[v])
                 continue;
             vis[v] = 1;
             dist[v] = dist[u] + 1;
             node.push(v);
         }
    }
}
void reset(){
    for (int i = 0; i <=node;i++) 
    {
        vis[i] = dist[i] = 0;
        adj[i].clear();
    }
}
void solve()
{
    ll t;
    cin >> t;
    while(t--)
    {
        cin >> node >> edge;
        reset();
        graph_input();
        BFS(0);
        for (int i = 1; i < node; i++)
            cout << dist[i] << nl;
        if(t) cout << nl;
 
    }
}
int main(){
fastIO
//testcase
solve();
return 0;
}
