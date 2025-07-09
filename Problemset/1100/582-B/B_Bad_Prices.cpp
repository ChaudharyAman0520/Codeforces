#include<bits/stdc++.h>
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
        vector<int> rightmin(n);
        rightmin[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rightmin[i]=min(rightmin[i+1],v[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(rightmin[i]!=v[i])
            {
                ans++;
            }
        }
        cout<<ans<<endl;    
    }
}