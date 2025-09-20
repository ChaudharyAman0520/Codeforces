#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,L,R;
        cin>>l>>r>>L>>R;
        int doors=min(r,R)-max(l,L)+1;
        int ans=doors-1;
        if(doors<=0)
        {
            cout<<1<<endl;
        }
        else
        {
            ans+=(l!=L);
            ans+=(r!=R);
            cout<<ans<<endl;
        }
    }
}