#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=1;
    for(int i=0;i<n-1;i++)
    {
        int end=v[i]+5;
        int index=upper_bound(v.begin(),v.end(),end)-v.begin();
        if(index==n)
        {
            ans=max(ans,index-i);
        }
        else
        {
            ans=max(ans,index-i);
        }
    }
    cout<<ans<<endl;
}