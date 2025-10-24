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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans=LLONG_MIN;
        for(int i=0;i<n-1;i+=2)
        {
            ans=max(ans,abs(v[i]-v[i+1]));
        }
        cout<<ans<<endl;
    }
}