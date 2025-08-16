#include <bits/stdc++.h>
#define int long long
using namespace std;
static bool cmp(vector<int>&a,vector<int>&b)
{
    return a[2]<b[2];
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<vector<int>> v;
        vector<int> supp;
        for(int i=0;i<n;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            v.push_back({a,b,c});
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++)
        {
            if(v[i][2]>k)
            {
                if(v[i][0]<=k&&v[i][1]>=k)
                {
                    k=v[i][2];
                }
            }
        }
        cout<<k<<endl;
    }
}