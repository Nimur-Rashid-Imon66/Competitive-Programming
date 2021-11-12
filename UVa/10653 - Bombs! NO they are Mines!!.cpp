/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */

#include <bits/stdc++.h>
#define pi             (3.141592653589)
#define mod            1000000007
#define nl             endl
#define pb             push_back
#define in             insert
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
typedef long double ld;
typedef unsigned long long ull;
using namespace std;
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}
ll BigMod(ll b, ll p, ll m) {if (p == 0) return 1;ll ans = BigMod(b, p/2, m);ans = ( ans * ans ) % m;if (p % 2 == 1) ans = (ans * b) % m;return ans;}
ll binarySearch(ll arr[], ll l, ll r, ll x) {if (r >= l){ll mid = l+(r-l) / 2;if (arr[mid] == x) return mid;if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);return binarySearch(arr, mid+1, r, x);}return -1 ;}
ll ModInv(ll a, ll m){return BigMod(a, m-2, m);}
ll base_to_dec(ll base , string x){ll da = 0,j = 0,i = x.size() - 1;while(i>=0){int z = (x[j] - '0');da += z * Pow(base, i);i--,j++;}return da;}


int dx[8] = {-1, 1, 0, 0,-1,1,-1,1};
int dy[8] = {0, 0, 1, -1,-1,1,1,-1};
int r, c;
ll grid[10005][10005];
int vis[10005][10005];
int dist[10005][10005];
bool isvalid(pair<int, int>v)
{
    return v.ff >= 0 && v.ff < r && v.ss >= 0 && v.ss < c && !grid[v.ff][v.ss];
}
void reset()
{
    memset(grid, 0, sizeof(grid));
    memset(dist, 0, sizeof(dist));
    memset(vis, 0, sizeof(vis));
}
void BFS(pair<int, int> src)//source come from main BFS(int src)
{
    queue<pair<int,int>> node; 
    node.push(src);
    vis[src.ff][src.ss] = 1;
    dist[src.ff][src.ss] = 0;
    while (!node.empty())
    {
        pair<int,int> u = node.front();
        node.pop();
        for (int i = 0; i < 4;i++)
        {
            pair<int, int> v;
            v.ff = u.ff + dx[i];
            v.ss = u.ss + dy[i];
            if(isvalid(v))
            {
                if (vis[v.ff][v.ss])
                    continue;
                vis[v.ff][v.ss] = 1;
                dist[v.ff][v.ss] = dist[u.ff][u.ss] + 1;
                node.push(v);
            }
         }
    }
}
void solve()
{
    while(1)
    {
        cin >> r >> c;
        if(!r&&!c) break;
        reset();
        int n;
        cin >> n;
        while(n--)
        {
            int row, x, col;
            cin >> row >> x;
            for (int i = 0; i < x;i++)
            {
                cin >> col;
                grid[row][col] = 1;
            }
        }
        pair<int,int>src,des;
        int x, y;
        cin >> x >> y;
        src.ff = x, src.ss = y;
        cin >> x >> y;
        BFS(src);
        cout<<dist[x][y]<<endl;
    }

}
int main(){
fastIO
//testcase
solve();
return 0;
}
