#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        int ans=0;
        int ct=0;
        int pos=0;
        for(int i=0;i<n;i++)
        {
            int time=v[i].first;
            int at=v[i].second;
            int rem=time-ct;
            if(pos!=at)
            {
                if(rem%2==1)
                {
                    ans+=rem;
                }
                else
                {
                    ans+=rem-1;
                }
            }
            else
            {
                if(rem%2==0)
                {
                    ans+=rem;
                }
                else
                {
                    ans+=rem-1;
                }
            }
            ct=time;
            pos=at;
        }
        ans+=m-ct;
        cout<<ans<<endl;
    }
}