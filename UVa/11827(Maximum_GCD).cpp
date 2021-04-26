#include<bits/stdc++.h>
#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define nl endl
#define testcase {ll t;cin>>t;while(t--){slove();}}
#define toint(a) atoi(a.c_str())

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
//bool prime[size];

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string str,s;
        int j=0,x,f=1;
        string  arr[1000];
        getline(cin,str);

        if(str=="") f=0;

        for(int i=0; i<str.size(); i++)
        {
            if(str[i]==' '&&str[i+1]==' ')
            {
                str.erase(str.begin() + i);
                i--;
            }
        }

        int i = 0;
        stringstream temp(str) ;
        while(temp >> arr[i])
        {
            i++;
        }
        j=i;


        int maxi=1;
        for(int i=0; i<j-1; i++)
        {
            for(int k=i+1; k<j; k++)
            {
                x =__gcd(toint(arr[i]),toint(arr[k]));
                    if(x>maxi)
                        maxi=x;
            }
        }


        if(f)
            cout<<maxi<<endl;
        else
            n++;


    }
    return 0;
}
