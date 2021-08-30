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


ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}
ll BigMod(ll b, ll p, ll m) {if (p == 0) return 1;ll ans = BigMod(b, p/2, m);ans = ( ans * ans ) % m;if (p % 2 == 1) ans = (ans * b) % m;return ans;}
ll binarySearch(ll arr[], ll l, ll r, ll x) {if (r >= l){ll mid = l+(r-l) / 2;if (arr[mid] == x) return mid;if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);return binarySearch(arr, mid+1, r, x);}return -1 ;}
ll ModInv(ll a, ll m){return BigMod(a, m-2, m);}

int v, e;
vector<int> adj_list[1000];
void input_graph()
{
    cin >> v >> e;
    for (int i = 0; i <e;i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].pb(b);
        adj_list[b].pb(a);
    }
}
int vis[100005];
int dist[100005];
queue<int> node;  
void BFS()//source come from main BFS(int src)
{ 
    memset(vis, 0, sizeof(vis));
    
    // source node for test
    int src; 
    printf("Enter source node to start BFS : ");
    cin>>src;

    node.push(src);
    vis[src] = 1;
    dist[src] = 0;
    while (!node.empty())
    { 
        int u = node.front();
        node.pop();
         for(auto v : adj_list[u]) // u ---> v
         {
             if(vis[v])
                 continue;
             vis[v] = 1;
             dist[v] = dist[u] + 1;
             node.push(v);
         }

    }
   
}



void slove()
{
    input_graph();
    BFS();
    for (int i = 0; i < v;i++)
        cout << i << " : " << dist[i]<<nl;
}
int main(){
fastIO
 //testcase
  slove();
return 0;
}
