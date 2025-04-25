#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	vector<long long> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int k;
	cin>>k;
	while(k--)
	{
		long long l,r;
		cin>>l>>r;
		auto li=lower_bound(v.begin(),v.end(),l)-v.begin();
		auto ri=upper_bound(v.begin(),v.end(),r)-v.begin();
		cout<<ri-li<<endl;
	}
}
