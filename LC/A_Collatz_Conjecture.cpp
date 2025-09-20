#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,x;
        cin>>k>>x;
        int ans=0;
        ans=pow(2,k)*x;
        cout<<ans<<endl;
    }
}