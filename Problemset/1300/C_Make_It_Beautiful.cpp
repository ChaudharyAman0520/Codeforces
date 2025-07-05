#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            ans+=__builtin_popcountll(v[i]);
        }
        for(int i=0;i<=60;i++)
        {
            int cost=(1ll<<i);
            for(int j=0;j<n;j++)
            {
                if((v[j]&cost)==0)
                {
                    if(k>=cost)
                    {
                        k=k-cost;
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}