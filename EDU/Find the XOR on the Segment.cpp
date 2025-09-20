#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> v(n+1),prefix(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    prefix[1]=v[1];
    for(int i=2;i<=n;i++)
    {
        prefix[i]=prefix[i-1]^v[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<(prefix[b]^prefix[a-1])<<endl;
    }
}