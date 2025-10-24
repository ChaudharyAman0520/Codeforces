#include<bits/stdc++.h>
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
    int ans=1;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]!=ans)
        {
            break;
        }
        else
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}