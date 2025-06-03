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
		int root=sqrt(n);
		if(root*root==n)
		{
			cout<<0<<" "<<root<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
}
