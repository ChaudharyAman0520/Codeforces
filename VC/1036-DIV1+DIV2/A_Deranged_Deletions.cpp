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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> ans;
        vector<int> b=a;
        sort(b.begin(),b.end());
        int i=0,j=0;
        while(i<n&&j<n)
        {
            if(b[i]==a[i])
            {
                i++;
                j++;
                continue;
            }
            else
            {
                ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        if(ans.size()==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<ans.size()<<endl;
            for(auto i:ans)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}