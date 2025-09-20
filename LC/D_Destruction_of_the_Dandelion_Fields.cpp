#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
            {
                even.push_back(x);
            }
            else
            {
                odd.push_back(x);
            }
        }
        if(odd.size()==0)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            int ans=0;
            sort(odd.begin(),odd.end());
            ans+=odd[odd.size()-1];
            for(auto i:even)
            {
                ans+=i;
            }
            int rem=odd.size()-1;
            int up=(rem+1)/2;
            for(int i=rem-1;i>=up;i--)
            {
                ans+=odd[i];
            }
            cout<<ans<<endl;
        }
    }
}