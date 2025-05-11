#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	int caseno=1;
	cin>>t;
	while(t--)
	{
		long long n,x;
		cin>>n>>x;
		long long temp=x;
		int count=0;
		while(temp) 
		{
			count+=(temp&1); 
			temp>>=1;         
		}
		if(n<=count)
		{
			//cout<<caseno<<"-"<<"n<=count"<<endl;
			cout<<x<<endl;
		}
		else if(x==0)
		{
			if(n==1)
			{
				cout<<-1<<endl;
				continue;
			}
			if(n%2==0)
			{
				cout<<n<<endl;
			}
			else
			{
				cout<<n+3<<endl;
			}
		}
		else if(x==1)
		{
			if(n%2==0)
			{
				cout<<5+n-2<<endl;
			}
			else
			{
				cout<<n<<endl;
			}
		}
		else
		{
			if((n-count)%2==0)
			{
				//cout<<caseno<<"-"<<"n-count MOD2"<<endl;
				cout<<x+(n-count)<<endl;
			}
			else
			{
				//cout<<caseno<<"-"<<"n-count MOD2 NOT EQUAL 0"<<endl;
				cout<<n-(count+1)+(x+2)<<endl;
			}
		}
	}
}

