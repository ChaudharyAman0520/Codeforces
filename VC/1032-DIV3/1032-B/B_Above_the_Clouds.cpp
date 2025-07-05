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
        map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        bool flag=false;
        for(auto i:mp)
        {
            if(i.second>=3)
            {
                flag=true;
            }
            else if(i.second==2)
            {
                char ch=i.first;
                if(ch!=s[0]||ch!=s[n-1])
                {
                    flag=true;
                }
            }
        }
        if(flag==true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}