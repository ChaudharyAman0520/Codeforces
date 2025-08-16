#include<bits/stdc++.h>
#define int long long
using namespace std;
bool canMake(int mid,int n,int x,int y)
{
    int cnt=0;
    if(mid<min(x,y))
    {
        return false;
    }
    mid-=min(x,y);
    cnt++;
    cnt+=(mid/x)+(mid/y);
    return cnt>=n;
}
main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int L=1,R=min(x,y)*n,mid;
    while(L+1<R)
    {
        mid=L+(R-L)/2;
        if(canMake(mid,n,x,y))
        {
            R=mid;
        }
        else
        {
            L=mid;
        }
    }
    if(canMake(L,n,x,y))
    {
        cout<<L<<endl;
        return 0;
    }
    cout<<R<<endl;
}