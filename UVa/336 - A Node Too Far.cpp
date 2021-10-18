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

ll P,edge;
vector<ll> adj[100000];
map<ll, int> vis_in_first;
map<ll, int> dist_in_first;
void graph_input()
{
    for (ll i = 0; i < P; i++)
    {
        ll u, v;
        cin >> u >> v;
        vis_in_first[u] = 0;
        vis_in_first[v] = 0;
        dist_in_first[u] = 1e5;
        dist_in_first[v] = 1e5;
        adj[u].pb(v);
        adj[v].pb(u);
   }
}
map<ll, int> dist;

void BFS(ll src)//source come from main BFS(int src)
{ 
   map<ll, int> vis;
   dist = dist_in_first;
   vis = vis_in_first;
   queue<int> node;
   node.push(src);
   vis[src] = 1;
   dist[src] = 0;
   while (!node.empty())
   {
       ll u = node.front();
       node.pop();
       for (auto v : adj[u]) // u ---> v
       {
           if (vis[v])
               continue;
           vis[v] = 1;
           dist[v] = dist[u] + 1;
           node.push(v);
       }

    }
}


void solve()
{
    ll c = 0;//case
    while(1)
    {
        cin >> P;
        if(!P) break;
        for (int i = 0; i < 1000;i++) 
        adj[i].clear();

        dist_in_first.clear();
        vis_in_first.clear();
        graph_input();
        while(1)
        {
            ll src, dis;
            cin >> src >> dis;
            if((!src)&&(!dis)) break;
            c++ ;
            dist.clear();
            BFS(src);
            ll cnt = 0;
            for (auto it : dist)
               if (it.ss > dis) 
                  cnt++;
            cout<<"Case "<<c<<": "<<cnt<<" nodes not reachable from node "<<src<<" with TTL = "<<dis<<"."<<nl;
        }
    }
    
}
int main(){
fastIO
//testcase
  solve();
return 0;
}
