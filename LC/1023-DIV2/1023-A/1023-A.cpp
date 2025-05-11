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
		vector<int>v(n);
		set<int>st;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v[i]=x;
			st.insert(x);
		}
		if(st.size()==1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		int gcd1=v[0];
		for(int i=1;i<n;i++)
		{
			gcd1=__gcd(gcd1,v[i]);
		}
		bool found=false;
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++)
		{
			if(v[i]!=gcd1&&found==false)
			{
				cout<<1<<" ";
				found=true;
			}
			else
			{
				cout<<2<<" ";
			}
		}
		cout<<endl;
		if(found==false)
		cout<<"NO"<<endl;
	}
}
