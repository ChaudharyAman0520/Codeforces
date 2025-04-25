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
		bool flag=false;
		vector<long long>v(n);
		int sides=-1;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.rbegin(),v.rend());
		for(int i=0;i<n-1;i--)
		{
			if(v[i]==v[i+1])
			{
				sides=v[i];
				v.erase(v.begin() + (i), v.begin() + (i + 2));
				break;
			}
		}
		for(auto i:v)
		{
			cout<<i<<" ";
		}
		cout<<endl;
		//~ if(sides==-1)
		//~ {
			//~ cout<<-1<<endl;
			//~ continue;
		//~ }
		//~ sort(v.begin(),v.end());
		//~ for(int i=0;i<n-1;i++)
		//~ {
			//~ if(sides*sides-(v[i+1]-v[i])/2>0)
			//~ {
				//~ cout<<v[i]<<" "<<v[i+1]<<" "<<sides<<" "<<sides<<endl;
				//~ flag=true;
				//~ break;
			//~ }
		//~ }
		//~ if(!flag)
		//~ {
			//~ cout<<-1<<endl;
		//~ }
	}
}

