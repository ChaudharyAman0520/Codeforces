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
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==0)
            {
                ans++;
            }
            else
            {
                ans+=v[i];
            }
        }
        cout<<ans<<endl;
    }
}