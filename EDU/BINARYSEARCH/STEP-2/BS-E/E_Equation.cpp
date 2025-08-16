#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    double c;
    cin>>c;
    double L=0.0,R=1e5,mid;
    while(R-L>1e-6)
    {
        mid=L+(R-L)/2;
        double val=mid*mid+sqrt(mid);
        if(val<=c)
        {
            L=mid;
        }
        else
        {
            R=mid;
        }
    }
    cout<<setprecision(16)<<(L+R)/2<<endl;
}
// 3.69823174
// 0.9999996109