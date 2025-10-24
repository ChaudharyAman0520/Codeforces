#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else
        {
            int cnt=0;
            vector<int> ans;
            int curr=a;
            for(int i=0;i<32;i++)
            {
                if((curr&(1LL<<i))!=(b&(1LL<<i)))
                {
                    if((1LL<<i)<=curr)
                    {
                        cnt++;
                        ans.push_back(1LL<<i);
                        curr^=(1LL<<i);
                    }
                }
            }
            if(curr!=b)
            {
                cout<<-1<<endl;
                continue;
            }
            cout<<cnt<<endl;
            for(auto i:ans)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}