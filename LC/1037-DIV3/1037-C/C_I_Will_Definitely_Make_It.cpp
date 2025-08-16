#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        int start=v[k];
        sort(v.begin(),v.end());
        int idx=lower_bound(v.begin()+1,v.end(),start)-v.begin();
        start=v[idx];
        int i=idx+1;
        while(i<=n&&start==v[i])
        {
            i++;
        }
        start=v[i-1];
        int waterlvl=1;
        bool possible=true;
        while(start!=v[n-1])
        {
            int time=v[i]-start;
            // cout<<"Time "<<time<<endl;
            // cout<<"WaterLvl "<<waterlvl<<endl;
            // cout<<"Height "<<start<<endl;
            if(waterlvl+time-1>start)
            {
                possible=false;
                break;
            }
            else
            {
                start=v[i];
                i++;
                waterlvl+=time;
            }
        }
        if(possible)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}