#include<bits/stdc++.h>
#define int long long
using namespace std;
bool canReach(double mid,vector<pair<int,int>>&v)
{

}
main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    double L=0.0,R=FLT_MIN,mid;
    for(int i=0;i<n;i++)
    {
        if((abs(v[i].first)/v[i].second)>R)
        {
            R=abs(v[i].first)/v[i].second;
        }
    }
    while(R-L>1e-6)
    {
        mid=L+(R-L)/2;
        if(canReach(mid,v))
        {
            R=mid;
        }
        else
        {
            L=mid;
        }
    }
    cout<<setprecision(10)<<L<<endl;
}