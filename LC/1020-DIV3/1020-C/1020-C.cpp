#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		vector<long long>a(n);
		vector<long long>b(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		bool poss=true;
		long long prev=-1,curr=-1;
		for(int i=0;i<n;i++)
		{
			if(b[i]!=-1)
			{
				curr=a[i]+b[i];
			}
			if(prev==-1)
			{
				prev=curr;
			}
			else if(prev!=curr)
			{
				poss=false;
				break;
			}
		}
		if(poss==false)
		{
			cout<<0<<endl;
			continue;
		}
		if(prev==-1)
		{
			long long mini=*min_element(a.begin(),a.end());
			long long maxi=*max_element(a.begin(),a.end());
			cout<<k-(maxi-mini)+1<<endl;
			//cout<<"IN PREV==-1"<<endl;
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]>prev||a[i]+k<prev)
				{
					poss=false;
					break;
				}
			}
			if(poss==false)
			{
				cout<<0<<endl;
				//cout<<"IN PREV==FALSE"<<endl;
			}
			else
			{
				cout<<1<<endl;
				//cout<<"IN PREV==1"<<endl;
			}
		}
	}
}
