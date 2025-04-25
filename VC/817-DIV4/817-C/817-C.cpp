#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,as=0,bs=0,cs=0;
		cin>>n;
		unordered_map<string,int>mp;
		string a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			mp[a[i]]++;
		}
		string b[n];
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			mp[b[i]]++;
		}
		string c[n];
		for(int i=0;i<n;i++)
		{
			cin>>c[i];
			mp[c[i]]++;
		}
		for(auto i:a)
		{
			if(mp[i]==1)
			{
				as=as+3;
			}
			else if(mp[i]==2)
			{
				as=as+1;
			}
		}
		for(auto i:b)
		{
			if(mp[i]==1)
			{
				bs=bs+3;
			}
			else if(mp[i]==2)
			{
				bs=bs+1;
			}
		}
		for(auto i:c)
		{
			if(mp[i]==1)
			{
				cs=cs+3;
			}
			else if(mp[i]==2)
			{
				cs=cs+1;
			}
		}
		cout<<as<<" "<<bs<<" "<<cs<<endl;
	}
}

