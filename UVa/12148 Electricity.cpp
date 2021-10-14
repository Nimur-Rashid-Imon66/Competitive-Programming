               /* بسم الله الرحمن الرحيم  */
                 /*				ربي جدن علما */
             /*			نيمور رشيدايمون */


#include <bits/stdc++.h>
#define pi             (3.141592653589)
#define mod            1000000007
#define nl             endl
#define pb             push_back
#define ff             first
#define ss             second
#define testcase       {ll t;cin>>t;while(t--){slove();}}
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

void slove()
{
    int n;
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (1)
    {
        cin >> n;
        if (!n)
            break;
        ll sum = 0, cnt = 0;
        ll d1, d2, m1, m2, y1, y2, c1, c2;
        cin >> d1 >> m1 >> y1 >> c1;
        ll s = 0,c=0;
        for (int i = 1; i < n; i++)
        {
            cin >> d2 >> m2 >> y2 >> c2;
            if (m1 == m2 && y1 == y2)
            {
                if (d2 - d1 == 1)
                {
                     s += c2 - c1;
                     c++;
                }
                   
                else
                {
                    if(s)
                    {
                        sum += s;
                        cnt+=c;
                        s = 0;
                        c = 0;
                    }
                    else
                         s = c = 0;
                }
            }
            else if (y1 == y2 && m1 != m2)
            {
               if(m2-m1==1)
                {
                    if (m1 == 2 && m2 == 3)
                    {
                        if ((y1 % 4 == 0 && y1 % 100 != 0) || y1 % 400 == 0)
                        {
                            if (d1 == 29 && d2 == 1)
                            {
                                s += c2 - c1;
                                 c++;
                            }
                            else
                            {
                                if (s)
                                {
                                    sum += s;
                                    cnt+=c;
                                    s = 0;
                                    c = 0;
                                }
                                else
                                     s = c = 0;
                            }
                        }
                        else
                        {
                            if (d1 == 28 && d2 == 1)
                            {
                                s += c2 - c1;
                                c++;
                            }
                            else
                            {
                                if (s)
                                {
                                    sum += s;
                                    cnt+=c;
                                    s = c = 0;
                                }
                                else
                                   {
                                       s = c = 0;
                                   }
                            }
                        }
                    }
                    else
                    {
                        int m1_last_day = month[m1];
                        if (d1 == m1_last_day && d2 == 1)
                        {
                            s += c2 - c1;
                            c++;
                        }
                        else
                        {
                            if (s)
                            {
                                sum += s;
                               cnt+=c;
                                s = c = 0;
                            }
                            else
                                 s = c = 0;
                        }
                    }
                }
                else
                {
                    if (s)
                    {
                         sum += s;
                         cnt+=c;
                         s = c = 0;
                    }
                    else
                         s = c = 0;
                }

            }
            else if(y1!=y2)
            {
                if(y2-y1==1)
                {
                    if(m1 == 12 && m2 == 1)
                    {
                        int m1_last_day = month[m1];
                        if (d1 == m1_last_day && d2 == 1)
                        {
                            s += c2 - c1;
                            c++;
                        }
                        else
                        {
                            if (s)
                            {
                                sum += s;
                                cnt+=c;
                                 s = c = 0;
                            }
                            else
                                s = c = 0;
                        }
                    }
                    else
                    {
                        if(s)
                        {
                            sum += s;
                           cnt+=c;
                             s = c = 0;
                        }
                        else
                             s = c = 0;
                    }
                }
                else
                {
                    if(s)
                    {
                        sum += s;
                        cnt+=c;
                        s = c = 0;
                    }
                    else
                         s = c = 0;
                }
            }
            d1 = d2, m1 = m2, y1 = y2, c1 = c2;
        }
        if(s)
        {
            sum += s;
            cnt+=c;
             s = c = 0;
        }
        cout << cnt << " " << sum << nl;
        sum = 0;
        s = c = 0;
        cnt = 0;
    }
}
int main(){
fastIO
//testcase
slove();
return 0;
}
