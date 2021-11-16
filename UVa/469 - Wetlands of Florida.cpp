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


int dx[8] = {-1, 1, 0, 0,-1,1,-1,1};
int dy[8] = {0, 0, 1, -1,-1,1,1,-1};
bool vis[150][150]={0};
int n, m;
int f = 0,cnt = 0;;

bool isvalid(pair<int, int> des,char grid[150][150])
{
    return des.ff < n && des.ff >= 0 && des.ss < m && des.ss >= 0 && grid[des.ff][des.ss] == 'W';
}

void reset()
{
    for (int i = 0; i < 150;i++)
        for (int j = 0; j < 150;j++)
          vis[i][j] = 0;
}

int intBanaw(string s)
 {
     ll ans = 0;
     ll i = s.size() - 1;
     for (ll j = 1; i >= 0;i--,j*=10){
         ll x = s[i] - '0';
         ans += x*j;
     }
     return ans;
 }

void dfs(pair<int,int> x,char grid[150][150])
{
    if(!vis[x.ff][x.ss])
    {
        cnt++;
        vis[x.ff][x.ss] = 1;
        for (int i = 0; i < 8;i++)
        {
            pair<int, int> des;
           des.ff = x.ff + dx[i];
           des.ss = x.ss + dy[i];
            if(isvalid(des,grid))
               dfs(des,grid);
        }
            
    }
}

void solve()
{
    int t;
    cin >> t;
    cin.ignore();
     string a, b;
    while (t--)
    {
        reset();
        char grid[150][150];
        n = 0;
        int r, c;
        if(f==1)
        {
          int j = 0;
          for (; j < a.size(); j++)
              grid[n][j] = a[j];
          grid[n][j] = '\0';
          n++;
        }
        while (cin >> grid[n])
        {
            if (grid[n][0] >= 'A' && grid[n][0] <= 'Z')
                n++;
            else
            {
                r = intBanaw(grid[n]);
                break;
            }
        }
        m = 0;
        while (grid[0][m] != '\0') m++;

        pair<int, int> src;
        cin >> c;

        src.ff = r - 1;
        src.ss = c - 1;

        dfs(src,grid);

        cout << cnt<<nl;
        cnt = 0;
       
        while (cin>>a)
        {
            if(a[0] == 'W'||a[0]=='L') 
            {
                f = 1;
                break;
            }
            else
            {
                cin >> b;
                r = intBanaw(a);
                c = intBanaw(b);
            }
            src.ff = r - 1;
            src.ss = c - 1;
            
            reset();
            dfs(src,grid);
            
            cout << cnt<<nl;
            cnt = 0;
        }
        if(t) cout << nl;
    }
}
int main(){
fastIO
//testcase
solve();
return 0;
}
