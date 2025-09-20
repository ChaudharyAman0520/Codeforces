#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int n,target;
    cin>>n>>target;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int L=0,R=0,ans=0,diff;
    while(R<n)
    {
        diff=v[R]-v[L];
        while(diff>target)
        {
            ans+=(n-R);
            L++;
            diff=v[R]-v[L];
        }
        R++;
    }
    cout<<ans<<endl;
}