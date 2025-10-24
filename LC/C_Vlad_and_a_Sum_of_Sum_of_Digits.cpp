#include<bits/stdc++.h>
#define int long long
using namespace std;
int sum(int s)
{
    int ans=0;
    while(s>0)
    {
        ans+=s%10;
        s=s/10;
    }
    return ans;
}
main()
{
    int t;
    cin>>t;
    vector<int> res(2e5+1);
    res[0]=0;
    for(int i=1;i<=2e5;i++)
    {
        res[i]=res[i-1]+sum(i);
    }
    while(t--)
    {
        int n;
        cin>>n;
        cout<<res[n]<<endl;
    }
}