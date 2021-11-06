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

int dx[3] = {-1, 0, 0};
int dy[3] = {0, 1, -1};
string st;
bool ispossible(int r, int c, pair<int, int> pos, int i, int j,char grid[100][100],int dori)
{
   // cout << pos.ff << " " << pos.ss << nl;
    return pos.ff+i < r && pos.ff+i >= 0 && pos.ss + j>= 0 && pos.ss + j < c && grid[pos.ff+i][pos.ss + j] == st[dori];
}


pair<int, int> src, des;
void solve()
{
    int r, c;
    cin >> r >> c;
    cin.ignore();
    char grid[100][100];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == '@')
            {
                src.ff = i;
                src.ss = j;
            }
            else if (grid[i][j] == '#')
            {
                des.ff = i;
                des.ss = j;
            }
        }
    pair<int, int> pos;
    pos = src;
    int dori = 0;
    while (pos != des)
    {
        if(dori)
            cout << " ";
        for (int i = 0; i < 3; i++)
        {
            if (ispossible(r, c, pos, dx[i], dy[i],grid,dori))
            {
                dori++;
                if (i == 0)
                    cout << "forth";
                else if (i == 1)
                    cout << "right";
                else if (i == 2)
                    cout << "left";
                pos.ff += dx[i];
                pos.ss += dy[i];
                break;
            }
        }
    }
    cout << nl;
}
int main()
{
    fastIO
        st = "IEHOVA#";
    testcase
    //solve();
    return 0;
}
