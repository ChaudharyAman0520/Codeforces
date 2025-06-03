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
        map<int,int> hash;
        for(int j=0;j<n;j++)
        {
            hash[v[j]-j]++;
        }
        int res=0;
        for(auto it:hash)
        {
            res+=(it.second*(it.second-1))/2;
        }
        cout<<res<<endl;
    }
}