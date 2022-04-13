/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */

#include <bits/stdc++.h>
using namespace std;
#define mod            1000000007
#define nl             endl
#define Nl             endl
#define pb             push_back
#define in             insert
#define ff             first
#define ss             second
#define pii            pair<int,int>
#define pll            pair<ll,ll>
#define vi             vector<int>
#define vl             vector<ll>
#define vii            vector<pair<int,int>>
#define vll            vector<pair<ll,ll>>
#define vc             vector<char>
#define vs             vector<string>
#define vpll           vector< pair<ll,ll> >
#define sei            set<int>
#define usei           unordered_set<int>
#define ses            set<string>
#define sepii          set< pair<int,int> >
#define di             deque<int>
#define sti            stack<int>
#define qi             queue<int>
#define pqi            priority_queue<int>
#define mpii           map<int,int>
#define mpll           map<ll,ll>
#define umii           unordered_map<int,int>
#define testcase       {ll t;cin>>t;while(t--){solve();}}
#define NO             cout << "NO" << endl;
#define Yes            cout << "Yes" << endl;
#define No             cout << "No" << endl;
#define yes            cout << "yes" << endl;
#define no             cout << "no" << endl;
#define YES            cout << "YES" << endl;
#define all(c)         c.begin(), c.end()
#define rall(c)        c.rbegin(), c.rend()
#define min3(a, b, c)  min(c, min(a, b))
#define min4(a, b,c,d) min(d, min(c, min(a, b)))
#define rrep(i, n)     for(int i=n-1;i>=0;i--)
#define rep(i,n)       for(int i=0;i<n;i++)
#define fastIO ios::sync_with_stdio(0); cin.tie(0); 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
int dx[8] = {-1, 1, 0, 0,-1,1,-1,1};
int dy[8] = {0, 0, 1, -1,-1,1,1,-1};

#define  pi         acos(-1.0)
#define  cos(a)     cos(a*pi/180)
#define  sin(a)     sin(a*pi/180)
#define  tan(a)     tan(a*pi/180)
#define  cosi(a)    acos(a)/(pi/180)
#define  sini(a)    asin(a)/(pi/180)
#define  tani(a)    atan(a)/(pi/180)
#define  Max3(a,b,c) max(a,max(b,c))
#define  Min3(a,b,c) min(a,min(b,c))

ll Pow(ll c, ll d) {return d == 0 ? 1 : c * Pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}
ll BigMod(ll b, ll p, ll m) {if (p == 0) return 1;ll ans = BigMod(b, p/2, m);ans = ( ans * ans ) % m;if (p % 2 == 1) ans = (ans * b) % m;return ans;}
ll binarySearch(ll arr[], ll l, ll r, ll x) {if (r >= l){ll mid = l+(r-l) / 2;if (arr[mid] == x) return mid;if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);return binarySearch(arr, mid+1, r, x);}return -1 ;}
ll ModInv(ll a, ll m){return BigMod(a, m-2, m);}
ll base_to_dec(ll base , string x){ll da = 0,j = 0,i = x.size() - 1;while(i>=0){int z = (x[j] - '0');da += z * Pow(base, i);i--,j++;}return da;}
ll intBanaw(string s)
 {
     ll ans = 0;
     ll i = s.size() - 1;
     for (ll j = 1; i >= 0;i--,j*=10){
         ll x = s[i] - '0';
         ans += x*j;
     }
     return ans;
 }

 string stringBanaw(ll n)
 {
     string ans;
     while(n)
     {
         int x = n % 10;
         ans += x + '0';
         n /= 10;
     }
     reverse(all(ans));
     return ans;
 }
 //BFS
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

//dfs
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
}

void solve()
{


}
int main(){
fastIO
//testcase
//solve();
return 0;
}
