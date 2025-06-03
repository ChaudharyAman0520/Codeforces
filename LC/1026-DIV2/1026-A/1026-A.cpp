#include<bits/stdc++.h>
#define int long long
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
		sort(v.begin(),v.end());
		if(v[n-1]-v[0]%2==0)
		{
			cout<<0<<endl;
		}
		else
		{
			int i=0,j=n-1;
			int cnt1=0,cnt2=0;
			while(v[i]%2!=v[n-1]%2)
			{
				cnt1++;
				i++;
			}
			while(v[j]%2!=v[0]%2)
			{
				cnt2++;
				j--;
			}
			cout<<min(cnt1,cnt2)<<endl;
		}
	}
}
