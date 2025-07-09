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
        int ind=n-1;
        while(ind>0&&v[ind]<=v[ind-1])
        {
            ind--;
        }
        while(ind>0&&v[ind]>=v[ind-1])
        {
            ind--;
        }
        cout<<ind<<endl;
    }
}