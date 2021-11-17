#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str1,str2;
    while(cin>>str1>>str2)
    {
         int len1 = str1.size();
    int len2 = str2.size();

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
    string ans;
    for(int i = len1,j=len2; i>0&&j>0;)
    {
       if(str1[i-1]==str2[j-1])
         {
             ans+=str1[i-1];
             i--;
             j--;
         }
       else if(grid[i-1][j]>=grid[i][j-1])
          i--;
       else
         j--;
    }

   // reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;

    }


    return 0;
}

