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
		string a,b;
		cin>>a>>b;
		int e0=0,o0=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]=='0')
			{
				if(i%2==0)
				{
					e0++;
				}
				else
				{
					o0++;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			if(b[i]=='0')
			{
				if(i%2==0)
				{
					o0++;
				}
				else
				{
					e0++;
				}
			}
		}
		if(e0>=ceil(n/2.0)&&(o0>=n/2))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
