#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
	ios::sync_with_stdio(false); // Turn off sync with C I/O
    cin.tie(nullptr);            // Untie cin from cout
	int n,m;
	cin>>n>>m;
	vector<vector<int>> v(n+1,vector<int>(m+1,0));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>v[i][j];
		}
	}	
	vector<vector<int>> prefsum(n+1,vector<int>(m+1,0));
	prefsum[1][1]=v[1][1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			prefsum[i][j]=prefsum[i][j-1]+v[i][j]+prefsum[i-1][j]-prefsum[i-1][j-1];
		}
	}
	//for(int i=1;i<=n;i++)
	//{
		//for(int j=1;j<=m;j++)
		//{
			//cout<<prefsum[i][j]<<" ";
		//}
		//cout<<endl;
	//}
	int q;
	cin>>q;
	int ans=0;
	while(q--)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		ans=prefsum[x2][y2]-prefsum[x2][y1-1]-prefsum[x1-1][y2]+prefsum[x1-1][y1-1];
		cout<<ans<<endl;
	}
	return 0;
}
