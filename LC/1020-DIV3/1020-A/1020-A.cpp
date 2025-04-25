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
		string s;
		cin>>s;
		int c1=0,c2=0;
		for(auto i:s)
		{
			if(i=='1')
			{
				c1++;
			}
			else
			{
				c2++;
			}
		}
		cout<<c1*(n-1)+c2<<endl;
	}
}
