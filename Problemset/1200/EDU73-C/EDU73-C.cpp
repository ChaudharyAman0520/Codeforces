#include<bits/stdc++.h>
using namespace std;
main()
{
	int q;
	cin>>q;
	while(q--)
	{
		long long c,m,x;
		cin>>c>>m>>x;
		long long most=c+m+x;
		int L=0,R=most/3+1;
		while(L+1<R)
		{
			int mid=L+(R-L)/2;
			if(mid<=c&&mid<=m)
			{
				L=mid;
			}
			else
			{
				R=mid;
			}
		}
		cout<<L<<endl;
	}
}
