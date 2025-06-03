#include<bits/stdc++.h>
using namespace std;
vector<int> ranq;
vector<int> parent;

void make_set(int n)
{
	ranq.assign(n+1,1);
	parent.resize(n+1);
	for(int i=1;i<=n;i++)
	{
		parent[i]=i;
		ranq[i]=1;
	}
}

int find_set(int n)
{
	if(n==parent[n])
	{
		return n;
	}
	parent[n]=find_set(parent[n]);
	return parent[n];
}

bool unite_set(int a,int b)
{
	int x=find_set(a);
	int y=find_set(b);
	if(x==y)
	{
		return false;
	}
	if(ranq[x]>=ranq[y])
	{
		parent[y]=x;
		ranq[x]+=ranq[y];
	}
	else
	{
		parent[x]=y;
		ranq[y]+=ranq[x];
	}
	return true;
}

main()
{
	int n,m;
	cin>>n>>m;
	make_set(n);
	while(m--)
	{
		int k;
		cin>>k;
		vector<int> comps(k);
		for(int i=0;i<k;i++)
		{
			cin>>comps[i];
		}
		for(int i=0;i<k-1;i++)
		{
			unite_set(comps[i],comps[i+1]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<ranq[find_set(i)]<<" ";
	}
	cout<<endl;
}
