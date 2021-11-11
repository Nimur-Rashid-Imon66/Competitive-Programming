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

int dx[8] = {-1, 1, 0, 0,-1,1,-1,1};
int dy[8] = {0, 0, 1, -1,-1,1,1,-1};
char grid[110][110];
int r,c;
bool isvalid(int x,int y)
{
    return x>=0 && x<r && y>=0 && y<c && grid[x][y]=='@';
}
void takeit(int x,int y)
{
    grid[x][y] ='*';
    for(int i=0;i<8;i++)
      if(isvalid(dx[i]+x,dy[i]+y))
         takeit(dx[i]+x,dy[i]+y);
}
void reset(int r,int c){
    for(int i =0;i<r;i++)
       for (int j = 0; j < c;j++)
         grid[i][j] ='*';
}
void solve()
{
    while(1)
    {
        cin >> r >> c;
        if(!r&&!c) break;
        reset(r,c);
        for(int i =0;i<r;i++)
           for (int j = 0; j < c;j++)
              cin>>grid[i][j];
        ll cnt = 0;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
             {
                 if(grid[i][j]=='@')
                 {
                     takeit(i,j);
                     cnt++;
                 }
             }
           
        }
        cout << cnt<<nl;
    }
    
    
}
int main(){
fastIO
//testcase
solve();
return 0;
}
