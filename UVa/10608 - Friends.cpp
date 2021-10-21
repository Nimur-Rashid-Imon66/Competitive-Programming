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
vector<ll> adj[550000];
map<ll, bool> vis_in_first;
void graph_input()
{
    for (ll i = 0; i < edge; i++)
    {
        ll u, v;
        cin >> u >> v;
        vis_in_first[u] = 0;
        vis_in_first[v] = 0;
        adj[u].pb(v);
        adj[v].pb(u);
   }
}
ll cnt;
void dfs(ll src)
{
    if(!vis_in_first[src])
    {
        cnt++;
        vis_in_first[src] = 1;
        for(auto it : adj[src])
           dfs(it);
    }
}

void solve()
{
        cin >> node >> edge;
        for (int i = 0; i <=node;i++) 
            adj[i].clear();
        vis_in_first.clear();
        graph_input();
        cnt = 0;
        ll mxcnt = 1;
        for(auto it : vis_in_first)
        {
            if(it.ss) continue;
            else
            {
               // cout << it.ff << " " << it.ss << nl;
                dfs(it.ff);
                if(cnt>mxcnt)
                    mxcnt = cnt;
                cnt = 0;
            }
        }
        
        cout <<mxcnt<< nl;  
}
int main(){
fastIO
testcase
//solve();
return 0;
}
