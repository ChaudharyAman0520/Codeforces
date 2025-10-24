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
        int c0=0,c1=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==0)
            {
                c0++;
            }
            else if(v[i]==-1)
            {
                c1++;
            }
        }
        int ans=c0;
        if(c1%2==0)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<ans+2<<endl;
        }
    }
}