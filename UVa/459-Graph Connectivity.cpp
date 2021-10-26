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

map<char, bool> vis_in_first;
vector<char> adj[100000];
ll cnt=0;
void dfs(char src)
{
    if(!vis_in_first[src])
    {
        vis_in_first[src] = 1;
        for(auto it : adj[src])
        dfs(it);
    }
}

void solve()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        char mx;
        cin >> mx;
        cin.ignore();
        cnt = 0;
        for (char i = 'A'; i <=mx;i++) 
            adj[i].clear();
        vis_in_first.clear();
        while (1)
        {
            string s;
            getline(cin, s);
            if (s.size() == 0) break;
            char u = s[0];
            char v = s[1];
            adj[u].pb(v);
            adj[v].pb(u);
            vis_in_first[u] = 0;
            vis_in_first[v] = 0;
        }
        for(auto it : vis_in_first)
        {
            if(it.ss) continue;
            else
            {
               cnt++;
               dfs(it.ff);
            }
        }
        ll intech = 0;
        for (int i = 'A'; i <= mx;i++)
         if(vis_in_first.find(i)==vis_in_first.end())
             intech++;
            cout << cnt + intech << nl;
        if(t)cout << nl;
    }
}
int main(){
fastIO
//testcase
solve();
return 0;
}
