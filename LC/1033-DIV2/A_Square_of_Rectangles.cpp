#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l1,l2,l3,b1,b2,b3;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;
        if(l2+l3==l1&&(b3==b2)&&(b3==b1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}