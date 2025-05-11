#include<bits/stdc++.h>
using namespace std;
int prefsum(int start,int end,vector<int>&pref)
{
	if(start==0)
	{
		return pref[end];
	}
	else
	{
		return(pref[end]-pref[start-1]);
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s;
		cin>>n>>s;
		vector<int>v(n),pref(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		pref[0]=v[0];
		for(int i=1;i<n;i++)
		{
			pref[i]=pref[i-1]+v[i];
		}
		int fans=INT_MAX;
		for(int i=0;i<n;i++)
		{
			int L=i,R=n-1,mid,ans=-1;
			while(L<=R)
			{
				mid=L+(R-L)/2;;
				if(prefsum(i,mid,pref)<=s)
				{
					L=mid+1;
					ans=mid;
				}
				else
				{
					R=mid-1;
				}
			}
			if(ans==-1||prefsum(i,ans,pref)!=s)
			{
				continue;
			}
			fans=min(fans,(n-(ans-i+1)));
		}
		if(fans==INT_MAX)
		{
			cout<<-1<<endl;
		}
		else
		{
		cout<<fans<<endl;
	}
	}
}
