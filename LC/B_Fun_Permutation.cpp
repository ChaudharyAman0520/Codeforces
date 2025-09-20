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
        int targ=n+1;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(targ-v[i]);
        }
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}