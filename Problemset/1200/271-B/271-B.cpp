#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	vector<long long>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	long long q;
	cin>>q;
	vector<long long>pref(n);
	pref[0]=v[0];
	for(int i=1;i<n;i++)
	{
		pref[i]=v[i]+pref[i-1];
	}
	/*for(int i:pref)
	cout<<i<<endl;*/
	while(q--)
	{
		long long x;
		cin>>x;
		auto it=lower_bound(pref.begin(),pref.end(),x)-pref.begin();
		cout<<it+1<<endl;
		
	}
}
