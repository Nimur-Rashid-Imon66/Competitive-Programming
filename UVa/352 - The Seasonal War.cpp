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

ll n;
int dx[8] = {-1, 1, 0, 0,-1,1,-1,1};
int dy[8] = {0, 0, 1, -1,-1,1,1,-1};
char grid[100][100];
bool ispossible(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < n;
}
void change_color(int i ,int j)
{
    grid[i][j] = '0';
    for (int k = 0; k < 8;k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        if (ispossible(x,y)&&grid[x][y]=='1')
            change_color(x, y);
    }
    
}
void solve()
{
    ll c = 0;
    
    while(cin>>n){
        c++;
        for(int i=0;i<n;i++)
            for (int j = 0; j < n;j++)
              cin>>grid[i][j];
        
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
              {
                  
                  if (grid[i][j] == '1')
                  {
                      change_color(i, j);
                      cnt++;
                  }
              }
        }
        cout << "Image number " << c << " contains " << cnt << " war eagles."<<nl;
    }
}
int main(){
    fastIO
        //testcase
        solve();
       
    return 0;
}
