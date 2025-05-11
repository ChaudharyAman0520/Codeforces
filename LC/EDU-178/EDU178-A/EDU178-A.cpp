#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,c;
		cin>>a>>b>>c;
		if((a+b+c)%3==0)
		{
			long long tot=a+b+c;
			long long l=tot/3;
			if(a<=l&&b<=l&&c>=l)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
