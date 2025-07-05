#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        vector<bool> flags(n,false);
        if(s[0]=='1')
        {
            flags[0]=true;
            if(n>1)
            flags[1]=true;
        }
        for(int i=1;i<n-1;i++)
        {
            if(s[i]==1)
            {
                flags[i]=true;
                if(flags[i-1]==false)
                {
                    flags[i-1]=true;
                }
                else if(flags[i+1]==false)
                {
                    flags[i+1]=true;
                }
            }
        }
        if(s[n-1]=='1')
        {
            flags[n-1]=true;
            if(n>1)
            {
                if(s[n-2]==false)
                {
                    flags[n-2]=true;
                }
            }   
        }
        string ans="Yes";
        for(int i=0;i<n;i++)
        {
            if(flags[i]==false)
            {
                ans="No";
            }
        }
        cout<<ans<<endl;
    }
}
