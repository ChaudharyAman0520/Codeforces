#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<int,int> mp;
        for(auto i:v)
        {
            mp[i]++;
        }
        bool ans=true;
        for(auto i:mp)
        {
            if(i.first!=i.second)
            {
                ans=false;
                break;
            }
        }
        if(ans==false)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}