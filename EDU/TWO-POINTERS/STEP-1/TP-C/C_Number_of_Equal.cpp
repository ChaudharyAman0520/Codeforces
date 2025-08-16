#include<bits/stdc++.h>
#define int long long
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
    int ans=0;
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            int val=a[i];
            int cnt1=0,cnt2=0;
            while(i<n&&a[i]==val)
            {
                i++;
                cnt1++;
            }
            while(j<m&&b[j]==val)
            {
                j++;
                cnt2++;
            }
            ans+=cnt1*cnt2;
        }
    }
    cout<<ans<<endl;
}