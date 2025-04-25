#include<bits/stdc++.h>
using namespace std;
int ceildiv(int n,int m)
{
	int ans=0;
	if(n%m!=0)
	{
		ans++;
	}
	ans+=n/m;
	return ans;
}
main()
{
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int mridesa=(m*a);
	if(mridesa<=b)
	{
		cout<<n*a;
	}
	else
	{
		int ans1=((n/m)*b)+((n%m)*a);
		int ans2=ceildiv(n,m)*b;
		cout<<min(ans1,ans2);
	}
}
