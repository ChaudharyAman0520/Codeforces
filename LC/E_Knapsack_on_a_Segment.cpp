#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int n,s;
    cin>>n>>s;
    vector<int> wt(n),cost(n);
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
    }
    int L=0,R=0,curr=0,ans=0,fans=0;
    while(R<n)
    {
        curr+=wt[R];
        ans+=cost[R];
        while(curr>s)
        {
            curr-=wt[L];
            ans-=cost[L];
            L++;
        }
        fans=max(fans,ans);
        R++;
    }
    cout<<fans<<endl;
}