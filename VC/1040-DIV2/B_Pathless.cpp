#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        if(sum==k)
        {
            cout<<-1<<endl;
        }
        else if(sum>k)
        {
            for(auto i:v)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            
        }
    }
}