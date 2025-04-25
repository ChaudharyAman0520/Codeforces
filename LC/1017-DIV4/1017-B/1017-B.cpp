#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,l,r;
		cin>>n>>m>>l>>r;
		int x=min(m,r);
		int y=m-x;
		cout<<-y<<" "<<x<<endl;
	}
}

