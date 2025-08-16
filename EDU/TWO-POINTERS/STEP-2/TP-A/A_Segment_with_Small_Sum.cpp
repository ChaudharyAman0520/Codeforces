#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int n,target;
    cin>>n>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int curr=0;
    int L=0,R=0;
    int ans=0;
    while(R<arr.size())
    {
        curr+=arr[R];
        if(curr<=target)
        {
            ans=max(ans,R-L+1);
        }
        while(curr>=target)
        {
            curr-=arr[L];
            L++;
        }
        R++;
    }
    cout<<ans<<endl;
}