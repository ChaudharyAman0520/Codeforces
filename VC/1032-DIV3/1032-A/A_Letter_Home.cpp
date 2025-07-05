#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int> v(n);
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            maxi=max(maxi,v[i]);
            mini=min(mini,v[i]);
        }
        // cout<<"MAX"<<maxi<<endl;
        // cout<<"MIN"<<mini<<endl;
        // cout<<"S ="<<s<<endl;
        if(s==mini)
        {
            cout<<maxi-s<<endl;
        }
        else if(s==maxi)
        {
            cout<<s-mini<<endl;
        }
        else if(s>maxi)
        {
            cout<<s-mini<<endl;
        }
        else if(s<mini)
        {
            cout<<maxi-s<<endl;
        }
        else
        {
            if(abs(maxi-s)>abs(s-mini))
            {
                cout<<2*(s-mini)+(maxi-s)<<endl;
            }
            else
            {
                cout<<2*(maxi-s)+(s-mini)<<endl;
            }
        }
    }
}