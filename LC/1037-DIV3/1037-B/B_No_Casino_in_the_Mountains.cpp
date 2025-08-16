#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        int ans=0,state=0;
        for(int i=1;i<=k;i++)
        {
            state+=v[i];
        }
        int i=1;
        while(i<=n-k+1)
        {
            if(state==0)
            {
                ans++;
                i=i+k+1;
                state=0;
                if(i<=n-k+1)
                {
                    for(int j=i;j<i+k;j++)
                    {
                        state+=v[j];
                    }
                }
            }
            else
            {
                state=state-v[i]+v[i+k];
                i++;
            }
        }
        cout<<ans<<endl;
    }
}