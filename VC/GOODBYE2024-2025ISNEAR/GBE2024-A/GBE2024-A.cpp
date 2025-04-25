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
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		bool flag=false;
		for(int i=0;i<n-1;i++)
		{
			if(2*min(v[i],v[i+1])>max(v[i],v[i+1]))
			{
				flag=true;
				break;
			}
		}
		if(!flag)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}
