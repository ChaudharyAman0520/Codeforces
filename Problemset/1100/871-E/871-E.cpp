#include<bits/stdc++.h>
using namespace std;
bool isValid(int i,int j,int n,int m)
{
	if(i<0||i>n-1)
	{
		return false;
	}
	if(j<0||j>m-1)
	{
		return false;
	}
	return true;
}
int bfs(vector<vector<int>>&v,vector<vector<bool>>&visited,int i,int j)
{
	visited[i][j]=true;
	queue<pair<int,int>>q;
	q.push({i,j});
	int depth=v[i][j];
	int n=v.size();
	int m=v[0].size();
	while(q.empty()==false)
	{
		auto it=q.front();
		q.pop();
		int x=it.first;
		int y=it.second;
		vector<int> dx{-1,0,1,0};
		vector<int> dy={0,1,0,-1};
		for(int k=0;k<4;k++)
		{
			int nx=x+dx[k];
			int ny=y+dy[k];
			if(isValid(nx,ny,n,m))
			{
				if(visited[nx][ny]==false&&v[nx][ny]!=0)
				{
					visited[nx][ny]=true;
					q.push({nx,ny});
					depth+=v[nx][ny];
					//~ cout<<v[nx][ny]<<endl;
				}
			}
		}
	}
	return depth;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<vector<int>> v;
		for(int i=0;i<n;i++)
		{
			vector<int> supp;
			for(int j=0;j<m;j++)
			{
				int x;
				cin>>x;
				supp.push_back(x);
			}
			v.push_back(supp);
		}
		vector<vector<bool>> visited(n,vector<bool>(m,false));
		int fvol=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(visited[i][j]==false&&v[i][j]!=0)
				{
					int vol=bfs(v,visited,i,j);
					//~ cout<<"VOL"<<" "<<vol<<endl;
					fvol=max(vol,fvol);
				}
			}
		}
		cout<<fvol<<endl;
	}
}
