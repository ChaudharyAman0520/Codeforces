#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		vector<int> v(n);
		vector<int> prevmax(n);
		vector<int> actlen(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		actlen[0]=v[0];
		for(int i=1;i<n;i++)
		{
			actlen[i]=actlen[i-1]+v[i];
		}
		prevmax[0]=v[0];
		for(int i=1;i<n;i++)
		{
			prevmax[i]=max(prevmax[i-1],v[i]);
		}
		//~ cout<<"PREVMAX STARTS"<<endl;
		//~ for(auto i:prevmax)
		//~ {
			//~ cout<<i<<" ";
		//~ }
		//~ cout<<endl<<"PREVMAX ENDS"<<endl;
		while(q--)
		{
			int k;
			cin>>k;
			auto it=upper_bound(prevmax.begin(),prevmax.end(),k)-prevmax.begin()-1;
			//~ cout<<"it "<<it<<" ";
			if(it!=-1)
			cout<<actlen[it]<<" ";
			else
			cout<<0<<" ";
		}
		cout<<endl;
	}
}
