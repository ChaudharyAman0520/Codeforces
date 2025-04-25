#include<bits/stdc++.h>
using namespace std;
main()
{
		int n;
		cin>>n;
		vector<int> v(n+1);
		v[0]=0;
		int ans=0,sum=0;
		for(int i=1;i<n+1;i++)
		{
			cin>>v[i];
			sum+=(v[i-1]-v[i]);
			if(sum<0)
			{
				ans+=abs(sum);
				sum=0;
			}
		}
		cout<<ans<<endl;
}
