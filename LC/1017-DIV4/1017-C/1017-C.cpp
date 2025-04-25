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
		set<int> s;
		int sum=0;
		vector<int> ans;
		for(int i=0;i<n*n;i++)
		{
			int x;
			cin>>x;
			if(s.find(x)==s.end())
			{
				ans.push_back(x);
			}
			s.insert(x);
		}
		for(int i:ans)
		{
			sum+=i;
		}
		int c=2*n;
		int rem=(c*(c+1)/2)-sum;
		cout<<rem<<" ";
		for(int i:ans)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

