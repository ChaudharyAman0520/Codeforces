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
		vector<long long> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		vector<int> even,odd;
		for(int i=0;i<n;i++)
		{
			if(v[i]&1)
			{
				odd.push_back(v[i]);
			}
			else
			{
				even.push_back(v[i]);
			}
		}
		
		if(is_sorted(odd.begin(),odd.end())&&is_sorted(even.begin(),even.end()))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
