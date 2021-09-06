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

void slove()
{
    string s;
    set<string> st;
    while(cin>>s)
    {
        string t;
        for(auto i : s)
        {
            if(tolower(i)>='a'&& tolower(i)<='z')
                t += tolower(i);
            else
            {
                st.insert(t);
                t = "";
            }
        }
        if(t!="")
          st.insert(t);
    }
    for(auto it : st)
    {
         if(it == "")
            continue;
        cout << it << endl;
    }
       
}
int main(){
fastIO
 //testcase
   slove();
return 0;
}
