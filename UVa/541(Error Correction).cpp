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

int n;
int ar[100][100];
int u = 1;
void slove()
{
    while (1)
    {
        cin >> n;
        if (!n)
            return;
        int r = 0, sb = 0, ansr = -1, ansc = -1, c = 0;
        for (int i = 0; i < n; i++)
        {
            sb = 0;
            for (int j = 0; j < n; j++)
            {
                cin >> ar[i][j];
                if (ar[i][j])
                    sb++;
            }
            if (sb % 2)
            {
                r++;
                ansr = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            sb = 0;
            for (int j = 0; j < n; j++)
            {
                if (ar[j][i])
                    sb++;
            }
            if (sb % 2)
            {
                c++;
                ansc = i;
            }
        }
        if (!r && !c)
            cout << "OK" << nl;
        else if (r == 1 && c == 1)
            cout << "Change bit ("<<ansr + 1 << "," << ansc + 1 << ")" << nl;
        else if (r > 1 || c > 1)
            cout << "Corrupt" << nl;
    }
}
int main()
{
    fastIO
    //testcase
    slove();
    return 0;
}
