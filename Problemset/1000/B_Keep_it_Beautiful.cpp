#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        string ans="";
        ans+="1";
        int cnt=0;
        int prev=v[0];
        for(int i=1;i<n;i++)
        {
            if(v[i]>=prev&&cnt==0)
            {
                prev=v[i];
                ans+="1";
            }
            else
            {
                if(cnt==1)
                {
                    if(v[i]<=v[0]&&v[i]>=prev)
                    {
                        prev=v[i];
                        ans+="1";
                    }
                    else
                    {
                        ans+="0";
                    }
                }
                else if(cnt>1)
                {
                    ans+="0";
                    continue;
                }
                else if(cnt==0)
                {
                    if(v[i]<=v[0])
                    {
                    prev=v[i];
                    ans+="1";
                    cnt=1;
                    }
                    else
                    {
                        ans+="0";
                    }
                }
                else
                {
                    ans+="0";
                }
            }
        }
    cout<<ans<<endl;
    }
}