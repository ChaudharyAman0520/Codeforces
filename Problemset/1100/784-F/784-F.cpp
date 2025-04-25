#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		int i=0,j=n-1,ans=0;
		int suml=v[0],sumr=v[n-1];
		while(i<j)
		{
			if(suml==sumr)
			{
				ans=max(ans,i+1+n-j);
			}
			if(suml<=sumr)
			{
				i++;
				suml+=v[i];
			}
			else if(sumr<suml)
			{
				j--;
				sumr+=v[j];
			}
		}
		cout<<ans<<endl;
	}
}
