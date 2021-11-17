#include<bits/stdc++.h>
#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define nl endl
#define testcase {ll t;cin>>t;while(t--){slove();}}

#define YES cout<<"YES"<<nl;
#define NO cout<<"NO"<<nl;
#define Yes cout<<"Yes"<<nl;
#define No cout<<"No"<<nl;

typedef long long ll;
typedef unsigned long long ull;
using namespace std;


void solve()
{
    int c =0;
   while(1)
   {
      vector<int>str1,str2;
    int len1,len2;
    cin>>len1>>len2;
    if(!len1&&!len2) break;
    //if(c) cout<<endl;
    for(int i=0;i<len1;i++)
    {
        int x;
        cin>>x;
        str1.push_back(x);
    }
    for(int i=0;i<len2;i++)
    {
        int x;
        cin>>x;
        str2.push_back(x);
    }
    int grid[len1+1][len2+1];
    for(int i = 0; i<=len1; i++)
    {
        for(int j =0; j<=len2; j++)
            grid[i][j] = 0;
    }
    for(int i = 1; i<=len1; i++)
        for(int j =1; j<=len2; j++)
        {
            if(str1[i-1]==str2[j-1])
                grid[i][j] = grid[i-1][j-1]+1;
            else
                grid[i][j] = max(grid[i-1][j],grid[i][j-1]);
        }
    int ans=0;
    for(int i = len1,j=len2; i>0&&j>0;)
    {
       if(str1[i-1]==str2[j-1])
         {
             ans++;
             i--;
             j--;
         }
       else if(grid[i-1][j]>=grid[i][j-1])
          i--;
       else
         j--;
    }

    c++;
    cout<<"Twin Towers #"<<c<<endl;
    cout<<"Number of Tiles : "<<ans<<endl<<endl;
  }
}

int main()
{
    solve();
    return 0;
}

