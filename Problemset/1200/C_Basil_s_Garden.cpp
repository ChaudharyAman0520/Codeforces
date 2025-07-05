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
        vector<int> v(n);
        bool isSortedDes=true;
        bool isSortedAsc=true;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=1;i<n;i++)
        {
            if(v[i]>v[i-1])
            {
                isSortedDes=false;
            }
            if (v[i]<v[i - 1])
            {
                isSortedAsc=false;
            }
        }
        if(isSortedDes==true)
        {
            cout<<*max_element(v.begin(),v.end())<<endl;
        }
        else if(isSortedAsc==true)
        {
            cout<<*max_element(v.begin(),v.end())+n-1<<endl;
        }
        else
        {
            int maxi=-1;
            int ind=-1;
            for(int i=0;i<n;i++)
            {
                if(v[i]>maxi)
                {
                    maxi=v[i];
                    ind=i;
                }
            }
            cout<<maxi+ind<<endl;
        }
    }
}
