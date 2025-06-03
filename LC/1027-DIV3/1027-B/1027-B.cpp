#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int cnt1=0,cnt0=0;
		for(auto i:s)
		{
			if(i=='1')
			{
				cnt1++;
			}
			else
			{
				cnt0++;
			}
		}
		int tot=n/2;
		if(cnt0<tot-k||cnt1<tot-k)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cnt0-=tot-k;
			cnt1-=tot-k;
			int ans=(cnt0/2)+(cnt1/2);
			if(ans>=k)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
}

