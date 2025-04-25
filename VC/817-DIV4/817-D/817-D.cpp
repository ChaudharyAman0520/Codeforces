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
		long long base=0;
		vector<int>diff;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='L')
			{
				if(i<n-1-i)
				{
					
					diff.push_back(n-1-i-i);
				}
				base+=i;
			}
			else
			{
				if(i>n-1-i)
				{
					diff.push_back(i+i+1-n);
				}
				base+=n-1-i;
			}
		}
		/*
		for(size_t i=0;i<diff.size();i++)
		{
			cout<<diff[i]<<" ";
		}
		cout<<endl<<base<<endl;
		*/
		
		sort(diff.rbegin(),diff.rend());
		int c=0;
		for(size_t i=0;i<diff.size();i++)
		{
			c++;
			base+=diff[i];
			cout<<base<<" ";
		}
		while(c<n)
		{
			cout<<base<<" ";
			c++;
		}
		cout<<endl;
	}
}
