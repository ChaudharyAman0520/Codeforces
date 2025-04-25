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
		vector<long long>v(n);
		int ecnt=0,ocnt=0,ans=0;
		for(int i =0;i<n;i++)
		{
			cin>>v[i];
			if(v[i]%2==0)
			{
				ecnt++;
			}
			else
			{
				ocnt++;
			}
		}
		if(ecnt!=0)
		ans=ocnt+1;
		else
		ans=ocnt-1;
		cout<<ans<<endl;
	}
}
