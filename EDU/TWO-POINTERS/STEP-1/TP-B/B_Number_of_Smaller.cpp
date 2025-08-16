#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int i=0,j=0;
    for(int i=0;i<m;i++)
    {
        while(j<n&&a[j]<b[i])
        {
            j++;
        }
        cout<<j<<" ";
    }
}