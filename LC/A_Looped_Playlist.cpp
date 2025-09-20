#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int n,p;
    cin>>n>>p;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int sum=accumulate(v.begin(),v.end(),0LL);
    int t=p/sum;
    int ans=t*p;
    int rem=p%sum;
    if(t==0)
    {
        
    }
    else
    {

    }
}