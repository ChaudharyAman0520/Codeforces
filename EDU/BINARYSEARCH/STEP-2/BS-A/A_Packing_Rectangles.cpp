#include<bits/stdc++.h>
#define int long long
using namespace std;
bool canFit(int mid,int w,int h,int n)
{
    return (mid/w)*(mid/h)>=n;
}
main()
{
    int w,h,n;
    cin>>w>>h>>n;
    int L=1,R=1;
    while(canFit(R,w,h,n)==false)
    {
        R*=2;
    }
    int mid;
    while(L+1<R)
    {
        mid=L+(R-L)/2;
        if(canFit(mid,w,h,n))
        {
            R=mid;
        }
        else
        {
            L=mid;
        }
    }
    cout<<R<<endl;
}