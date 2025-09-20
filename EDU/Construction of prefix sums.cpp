#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> prefix(n,0);
    prefix[0]=v[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+v[i];
    }
    cout<<0<<" ";
    for(auto i:prefix)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}