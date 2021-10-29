#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>

#define ll long long int
#define nl endl
#define pb push_back
#define ff first
#define ss second
using namespace std;

bool ok(ll n)
{
    return true;
}
int main()
{
    int n, pieces;
    cin >> n;
    vector<int> vt(n);
    for (int i = 0; i < n; i++)
        cin >> vt[i];
    cin >> pieces;
    int x;
    for (int i = 0; i < pieces; i++)
    {
        cin >> x;
        int low = lower_bound(vt.begin(), vt.end(), x) - vt.begin();
        int up = upper_bound(vt.begin(), vt.end(), x) - vt.begin();
       // cout <<"demo : "<< low <<" "<< up << nl;
        if (vt[low] == x||low==0)
        {
            if (low == 0)
            {
                cout << 'X' << ' ';
            }
            else
                cout << vt[low - 1] << ' ';
        }
        else
            cout << vt[low-1] << ' ';

        if (vt[up] == x||up==n)
        {
            if (up == n - 1||up==n)
            {
                cout << 'X' << nl;
            }
            else
                cout << vt[up + 1] << nl;
        }
        else
            cout << vt[up] << nl;
    }
    return 0;
}
