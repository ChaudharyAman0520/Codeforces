#include<bits/stdc++.h>
#define int long long 
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
        multiset<int> mst;
        sort(v.begin(),v.end());
        mst.insert(v[0]);
        for(int i=1;i<n;i++)
        {
            auto it=mst.find(v[i]-1);
            if(it==mst.end())
            {
                mst.insert(v[i]);
            }
            else
            {
                mst.erase(it);
                mst.insert(v[i]);
            }
        }
        cout<<mst.size()<<endl;
    }
}