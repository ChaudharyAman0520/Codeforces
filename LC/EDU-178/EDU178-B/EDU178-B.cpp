#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
     {
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
			cin>>v[i];
		}
        vector<long long> prefix(n),maxi(n);
        prefix[0]=v[0];
        maxi[0]=v[0];
        for (int i=1;i<n;i++) 
        {
            prefix[i]=prefix[i-1]+v[i];
            maxi[i]=max(maxi[i-1],v[i]);
        }
        for (int i=1;i<=n;i++) 
        {
            long long sum=prefix[n-1]-(n-i-1>=0?prefix[n-i-1]:0);
            long long ans=sum;
            if (n-i-1>=0)
            {
                ans=max(ans,sum-v[n-i]+maxi[n-i-1]);
            }
            cout<<ans<< " ";
        }
        cout<<endl;
    }
}
