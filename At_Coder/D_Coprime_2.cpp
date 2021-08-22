#include <bits/stdc++.h>
#define nl endl
using namespace std;

long long vis[10000005];

void solve()
{
    long long n, m, x;
    cin >> n >> m;
    vector<long long> mp;
    for (long long i = 0; i < n; i++)
    {
        cin >> x;
        mp.push_back(x);
    }

    //sort(arr.rbegin(), arr.rend());
    map<int, int> fector;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        x = *i;
        for (long long j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
                fector.insert({j, j});
            while (x % j == 0)
                x /= j;
        }
        if (x > 1)
            fector.insert({x, 1});
    }
    for (auto it = fector.begin(); it != fector.end(); it++)
    {
        x = it->first;
        for (int i = x; i <= m; i += x)
            vis[i] = 1;
    }
    map<long long, long long> res;
    for (long long i = 1; i <= m; i++)
        if (!vis[i])
            res.insert({i, i});
    cout << res.size() << nl;
    for (auto i = res.begin(); i != res.end(); i++)
        cout << i->first << nl;
}

int main()
{
    solve();
    return 0;
}