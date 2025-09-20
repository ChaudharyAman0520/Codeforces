#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
	ios::sync_with_stdio(false); // Turn off sync with C I/O
    cin.tie(nullptr);            // Untie cin from cout
	int n;
	cin>>n;
	vector<int> v(n+1,0);
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}
	vector<int> diff(n+1,0);
	for(int i=1;i<=n;i++)
	{
		diff[i]=v[i]-v[i-1];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int l,r,x;
		cin>>l>>r>>x;
		diff[l]+=x;
		if(r+1!=n+1)
		{
			diff[r+1]-=x;
		}
	}
	int prefsum=0;
	for(int i=1;i<=n;i++)
	{
		prefsum+=diff[i];
		cout<<prefsum<<" ";
	}
	cout<<endl;
	return 0;
}

