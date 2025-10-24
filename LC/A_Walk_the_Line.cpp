#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> v(n);
        int fastest=LLONG_MAX;
        for(int j=0;j<n;j++)
        {
            cin>>v[j];
            fastest=min(fastest,v[j]);
        }
        if(n==1)
        {
            if(fastest<=k)
            {
                cout<<"Case #"<<i<<":"<<" YES"<<endl;
            }
            else
            {
                cout<<"Case #"<<i<<":"<<" NO"<<endl;
            }
        }
        else if(fastest*(2*n-3)<=k)
        {
            cout<<"Case #"<<i<<":"<<" YES"<<endl;
        }
        else
        {
            cout<<"Case #"<<i<<":"<<" NO"<<endl;
        }
    }
}
