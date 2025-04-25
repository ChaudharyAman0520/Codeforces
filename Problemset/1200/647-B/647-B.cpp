#include<bits/stdc++.h>
using namespace std;
bool checker[1025]={false};
bool check(int v[],int k,int n)
{
	for(int i=1;i<=n;i++)
	{
		if(checker[v[i]^k]==false)
		{
			return false;
		}
	}
	return true;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int v[1025];
		for(int i=0;i<1025;i++)
		{
			checker[i]=false;
		}
		for(int i=1;i<=n;i++)
		{
			cin>>v[i];
			checker[v[i]]=true;
		}
		
		int ans=-1;
		for(int i=1;i<1024;i++)
		{
			if(check(v,i,n)==true)
			{
				ans=i;
				break;
			}
		}
		cout<<ans<<endl;
	}
}
