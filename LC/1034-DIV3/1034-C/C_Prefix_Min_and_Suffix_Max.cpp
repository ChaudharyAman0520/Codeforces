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
        vector<int> pref(n);
        vector<int> suff(n);
        pref[0]=v[0];
        for(int i=1;i<n;i++)
        {
            pref[i]=min(pref[i-1],v[i]);
        }
        suff[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=max(suff[i+1],v[i]);
        }
        string ans="";
        vector<int> exists(n,0);
        set<int> s;
        for(auto i:pref)
        {
            s.insert(i);
        }
        for(auto i:suff)
        {
            s.insert(i);
        }
        for(int i=0;i<n;i++)
        {
            if(s.find(v[i])!=s.end())
            {
                exists[i]=1;
            }
        }
        for(auto i:exists)
        {
            ans+=i+'0';
        }
        cout<<ans<<endl;
    }
}