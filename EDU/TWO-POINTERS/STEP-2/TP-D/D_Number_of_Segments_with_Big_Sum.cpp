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
    int L=0,R=0,ans=0;
    int sum=0;
    while(R<n)
    {
        sum+=v[R];
        while(L<n&&sum>=target)
        {
            sum-=v[L];
            ans+=n-R;
            L++;
        }
        R++;
    }
    cout<<ans<<endl;
}