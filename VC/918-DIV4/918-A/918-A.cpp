#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a==c)
		{
			cout<<b<<endl;
		}
		else if(a==b)
		{
			cout<<c<<endl;
		}
		else
		{
			cout<<a<<endl;
		}
	}
}
