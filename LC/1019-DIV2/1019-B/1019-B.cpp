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
		char prev='0';
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]!=prev)
			{
				count++;
			}
			prev=s[i];
		}
		if(count<2)
		{
			cout<<n+count<<endl;
		}
		else if(count==2)
		{
			cout<<n+count-1<<endl;
		}
		else
		{
			cout<<n+count-2<<endl;
		}
	}
}

