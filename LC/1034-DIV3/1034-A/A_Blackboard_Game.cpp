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
        if(n%2!=0)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            bool flag=false;
            for(int i=2;i<=100;i=i+2)
            {
                if(i==n)
                {
                    if(flag)
                    {
                        cout<<"Bob"<<endl;
                    }
                    else
                    {
                        cout<<"Alice"<<endl;
                    }
                }
                if(flag==false)
                {
                    flag=true;
                }
                else
                {
                    flag=false;
                }
            }
        }
    }
}