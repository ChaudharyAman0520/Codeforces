#include<bits/stdc++.h>
#define int long long 
using namespace std;
bool canCut(double mid,int k,vector<int>&v)
{
    int cnt=0;
    for(auto i:v)
    {
        cnt+=i/mid;
    }
    return cnt>=k;
}
main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    double L=0.0,R=*max_element(v.begin(),v.end()),mid;
    while(R-L>1e-6)
    {
        mid=L+(R-L)/2;
        if(canCut(mid,k,v))
        {
            L=mid;
        }
        else
        {
            R=mid;
        }
    }
    cout<<fixed<<setprecision(6)<<L<<endl;
}