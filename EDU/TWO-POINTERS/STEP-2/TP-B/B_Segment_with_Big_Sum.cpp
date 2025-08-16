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
    int L=0,R=0,curr=0,ans=INT_MAX;
    while(R<arr.size())
    {
        curr+=arr[R];
        while(L<n&&curr>=target)
        {
            ans=min(ans,R-L+1);
            curr-=arr[L];
            L++;
        }
        R++;
    }
    if(ans==INT_MAX)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans<<endl;
}