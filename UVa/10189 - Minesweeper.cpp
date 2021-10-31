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


int n, m;
int dx[8] = {-1, 1, 0, 0,-1,1,-1,1};
int dy[8] = {0, 0, 1, -1,-1,1,1,-1};
bool isvalid(int x,int y,char fild[200][200])
{
    return x >= 0 && x < n && y >= 0 && y < m && fild[x][y]!='*';
}

void solve()
{
    int c = 0;
    while(1)
    {
        cin>>n>>m;
        if(!n&&!m)
            break;
        if(c)
            cout << nl;
        c++;
        char fild[200][200];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> fild[i][j];
        int level[200][200] = {0};
        cout << "Field #" << c << ":" << nl;
        for(int i =0;i<n;i++)
        {
           for (int j = 0; j < m;j++)
            {
                if(fild[i][j]=='*')
                {
                    level[i][j] = -1;
                    for (int k = 0; k < 8;k++)
                    {
                        int x = i + dx[k];
                        int y = j + dy[k];
                        if(isvalid(x,y,fild)) level[x][y]++;
                        
                    }
                }
            }
        }
        for(int i =0;i<n;i++)
        {
           for (int j = 0; j < m;j++)
            if(level[i][j]==-1)
                cout << '*';
            else
                cout << level[i][j];
        cout<<endl;
        }
       // cout << nl;
    }
}
int main(){
fastIO
//testcase
solve();
return 0;
}
