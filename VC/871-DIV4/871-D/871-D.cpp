#include<bits/stdc++.h>
using namespace std;
bool checker(long long n,long long m)
{
	if(n==m)
	{
		return true;
	}
	else if(n%3!=0)
	{
		return false;
	}
	else
	{
		return(checker(n/3,m)||checker((2*n)/3,m));
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m;
		cin>>n>>m;
		bool ans=checker(n,m);
		if(ans)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}

