#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int n,s;
    cin>>n>>s;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int L=0,R=0,curr=0,ans=0;
    while(R<n)
    {
        curr+=v[R];
        while(curr>s)
        {
            curr-=v[L];
            L++;
        }
        int cnt=R-L+1;
        // cout<<"CNT = "<<(cnt*(cnt+1))/2<<endl;
        ans+=(1LL*cnt*(cnt+1)/2);
        R++;
    }
    cout<<ans<<endl;
}