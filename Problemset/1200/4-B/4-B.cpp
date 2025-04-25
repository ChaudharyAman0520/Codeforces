#include<bits/stdc++.h>
using namespace std;
main()
{
	int d,sumTime,summin=0,summax=0;
	cin>>d>>sumTime;
	int arrmin[d],arrmax[d];
	for(int i=0;i<d;i++)
	{
		cin>>arrmin[i];
		cin>>arrmax[i];
		summin+=arrmin[i];
		summax+=arrmax[i];
	}
	if(sumTime>summax||sumTime<summin)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		int extra=sumTime-summin;
		while(extra>0)
		{
			for(int i=0;i<d;i++)
			{
				if(arrmin[i]+1<=arrmax[i])
				{
					arrmin[i]++;
					extra--;
				}
				if(extra==0)
				{
					break;
				}
			}
		}
		cout<<"YES"<<endl;
		for(int i:arrmin)
		{
			cout<<i<<" ";
		}
	}
}
