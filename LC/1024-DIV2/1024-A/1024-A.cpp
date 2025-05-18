#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,q,p;
		cin>>n>>m>>p>>q;
		int segcnt=n/p;
		int rem=n%p;
		if(rem==0)
		{
			if(m==segcnt*q)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}
