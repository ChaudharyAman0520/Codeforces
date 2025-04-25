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
		int ans=-1,pers=-1;
		for(int i=1;i<=n;i++)
		{
			int len,qual;
			cin>>len>>qual;
			if(len<=10)
			{
				if(qual>ans)
				{
					ans=qual;
					pers=i;
				}
			}
		}
		cout<<pers<<endl;
	}
}

