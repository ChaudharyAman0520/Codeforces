#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(a%2!=0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			if(b%2==0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				if(a==0)
				{
					cout<<"NO"<<endl;
				}
				else
				{
					cout<<"YES"<<endl;
				}
			}
		}	
	}
}
