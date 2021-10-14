               /* بسم الله الرحمن الرحيم  */
                 /*				ربي جدن علما */
             /*			نيمور رشيدايمون */


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


ll node,edge;
vector<ll> adj[100000];
void graph_input()
{
   cin >> node >> edge;
   for (ll i = 0; i < edge;i++)
   {
       ll u, v;
       cin >> u >> v;
       adj[u].pb(v);
       adj[v].pb(u);
   }
}
void graph_output()
{
   for (ll i = 1; i <= node;i++)
     {
           cout << i << " : ";
           for(auto it : adj[i])
               cout << it << " ";
           cout << nl;
     }
}
bool vis[200000]={0};
void dfs(ll src)
{
    if(!vis[src])
    {
        cout << src << ' ';
        vis[src] = 1;
        for(auto it : adj[src])
           dfs(it);
    }

void slove()
{
    graph_input();
    cout << nl << "Adjacency List : " << nl;
    graph_output();
    cout << "DFS : " << nl;
    dfs(1);
}

int main(){
    fastIO
    slove();
    return 0;
}
