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
        string s;
        cin>>s;
        vector<int> ans;
        int size=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                size++;
                ans.push_back(i+1);
            }
        }
        cout<<size<<endl;
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}