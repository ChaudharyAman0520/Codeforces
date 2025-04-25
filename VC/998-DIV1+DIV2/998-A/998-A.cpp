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
		for(int i=1;i<=a*b;i++)
		{
			if(i>=a||i>=b)
			{
				if(i%a==i%b)
				{
					cout<<i<<endl;
					break;
				}
			}
		}
	}
}
