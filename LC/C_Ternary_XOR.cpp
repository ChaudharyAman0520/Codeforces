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
        string a = "",b = "";
        int greater=-1;
        for(auto i:s)
        {
            if(i=='0')
            {
                a+='0';
                b+='0';
            }
            else if(i=='2')
            {
                if(greater==-1)
                {
                    a+='1';
                    b+='1';
                }
                else
                {
                    b+='2';
                    a+='0';
                }
            }
            else
            {
                if(greater==-1)
                {
                    a+='1';
                    b+='0';
                    greater=0;
                }
                else
                {
                    b+='1';
                    a+='0';
                }
            }
        }
        cout<<a<<endl<<b<<endl;
    }
}