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
        int ans=0;
        if(v[0]>v[1])
        {
            ans=v[0]+v[1];
        }
        else
        {
            if(n==2)
            {
                ans=v[0]+min(v[0],v[1]);
            }
            else
            {
                ans=2*v[0];
            }
        }
        cout<<ans<<endl;
    }
}