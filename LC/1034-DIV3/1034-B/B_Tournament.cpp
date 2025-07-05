#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j,k;
        cin>>n>>j>>k;
        vector<int> v(n+1);
        int maxi=-1;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            maxi=max(maxi,v[i]);
        }
        if(k!=1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            if(v[j]>=maxi)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}