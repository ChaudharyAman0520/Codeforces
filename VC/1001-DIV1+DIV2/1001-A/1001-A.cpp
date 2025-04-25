#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int c=0;
		for(char ch:s)
		{
			if(ch=='1')
			c++;
		}
		cout<<c<<endl;
	}
}
