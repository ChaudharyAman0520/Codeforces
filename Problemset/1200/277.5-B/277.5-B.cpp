#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	vector<int> boys(n);
	for(int i=0;i<n;i++)
	{
		cin>>boys[i];
	}
	int m;
	cin>>m;
	vector<int> girls(m);
	for(int i=0;i<m;i++)
	{
		cin>>girls[i];
	} 
	sort(boys.begin(),boys.end());
	sort(girls.begin(),girls.end());
	int i=0,j=0,ans=0;
	while(i<n&&j<m)
	{
		//cout<<i<<" "<<j<<endl;
		if(abs(boys[i]-girls[j])<=1)
		{
			ans++;
			i++;
			j++;
		}
		else if(boys[i]>girls[j])
		{
			j++;
		}
		else
		{
			i++;
		}
	}
	cout<<ans;
}
