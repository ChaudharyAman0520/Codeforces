#include<bits/stdc++.h>
using namespace std;
main()
{
	string s;
	cin>>s;
	for(long long unsigned int i=0;i<s.length();i++)
	{
		char ch='9'-s[i]+'0';
		if(ch<s[i])
		{
			if(i==0&&ch=='0')
			{
				cout<<s[i];
			}
			else
			{
				cout<<ch;
			}
		}
		else
		{
			cout<<s[i];
		}
	}
}
