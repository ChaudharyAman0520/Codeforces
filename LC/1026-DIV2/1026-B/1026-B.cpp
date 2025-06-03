#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int cnt=0;
		bool flag=false;
		for(int i=0;i<(int)s.length()-1;i++)
		{
			if(s[i]=='(')
			{
				cnt++;
			}
			else
			{
				cnt--;
			}
			if(cnt==0)
			{
				flag=true;
				break;
			}
		}
		if(flag==true)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}

