#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a>>b>>c;
		int afound=false,bfound=false,cfound=false;
		for(int i=0;i<3;i++)
		{
			if(a[i]=='A')
			{
				afound=true;
			}
			else if(a[i]=='B')
			{
				bfound=true;
			}
			else if(a[i]=='C')
			{
				cfound=true;
			}
		}
		if(afound==false)
		{
			cout<<"A"<<endl;
			continue;
		}
		if(bfound==false)
		{
			cout<<"B"<<endl;
			continue;
		}
		if(cfound==false)
		{
			cout<<"C"<<endl;
			continue;
		}
		afound=false,bfound=false,cfound=false;
		for(int i=0;i<3;i++)
		{
			if(b[i]=='A')
			{
				afound=true;
			}
			else if(b[i]=='B')
			{
				bfound=true;
			}
			else if(b[i]=='C')
			{
				cfound=true;
			}
		}
		if(afound==false)
		{
			cout<<"A"<<endl;
			continue;
		}
		if(bfound==false)
		{
			cout<<"B"<<endl;
			continue;
		}
		if(cfound==false)
		{
			cout<<"C"<<endl;
			continue;
		}
		afound=false,bfound=false,cfound=false;
		for(int i=0;i<3;i++)
		{
			if(c[i]=='A')
			{
				afound=true;
			}
			else if(c[i]=='B')
			{
				bfound=true;
			}
			else if(c[i]=='C')
			{
				cfound=true;
			}
		}
		if(afound==false)
		{
			cout<<"A"<<endl;
			continue;
		}
		if(bfound==false)
		{
			cout<<"B"<<endl;
			continue;
		}
		if(cfound==false)
		{
			cout<<"C"<<endl;
			continue;
		}
	}
}

