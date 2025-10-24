#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        bool ans=true;
        for(int i=0;i<31;i++)
        {
            int a=(x>>i)&1;
            int b=(y>>i)&1;
            int c=(z>>i)&1;
            if((a==0&&b==1&&c==1)||(a==1&&b==0&&c==1)||(a==1&&b==1&&c==0))
            {
                ans=false;
                break;
            }
        }
        if(ans==true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}