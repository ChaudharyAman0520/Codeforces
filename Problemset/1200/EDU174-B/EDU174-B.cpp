#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<vector<int>>v;
		for(int i=0;i<n;i++)
		{
			vector<int>supp;
			for(int j=0;j<m;j++)
			{
				int x;
				cin>>x;
				supp.push_back(x);
			}
			v.push_back(supp);
		}
		vector<int>orig(n*m+1,0);
		vector<int>hasdup(n*m+1,0);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				orig[v[i][j]]=1;
				if(i<n-1)
				{
					if(v[i][j]==v[i+1][j])
					{
						hasdup[v[i][j]]=1;
					}
				}
				if(j<m-1)
				{
					if(v[i][j]==v[i][j+1])
					{
						hasdup[v[i][j]]=1;
					}
				}
			}
		}
		//~ int c1=0,c2=0;
		//~ for(auto i:orig)
		//~ {
			//~ if(i==1)
			//~ {
				//~ c1++;
			//~ }
		//~ }
		//~ for(auto i:hasdup)
		//~ {
			//~ if(i==1)
			//~ {
				//~ c2++;
			//~ }
		//~ }
		//~ int max_freq = 0;
		//~ unordered_map<int, int> freq_map;
		//~ for (const auto& row : v) 
		//~ {
			//~ for (int element : row) 
			//~ {
				//~ freq_map[element]++;
				//~ if (freq_map[element] > max_freq) 
				//~ {
					//~ max_freq = freq_map[element];
				//~ }
			//~ }
		//~ }
		int result = accumulate(orig.begin(), orig.end(), 0) + accumulate(hasdup.begin(), hasdup.end(), 0) - 1 - *max_element(hasdup.begin(), hasdup.end());
cout << result << endl;
	}
}
