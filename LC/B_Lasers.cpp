#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int ans=0;
        while(n--)
        {
            int x;
            cin>>x;
            ans++;
        }
         while(m--)
        {
            int x;
            cin>>x;
            ans++;
        }
        cout<<ans<<endl;
    }
}