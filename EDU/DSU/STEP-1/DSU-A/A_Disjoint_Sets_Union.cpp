#include<bits/stdc++.h>
using namespace std;
vector<int> parent;
vector<int> sizer;
void make_set(int n)
{
    parent.resize(n+1);
    sizer.assign(n+1,1);
    for(int i=1;i<=n;i++)
    {
        parent[i]=i;
    }
}

int find_set(int x)
{
    if(parent[x]==x)
    {
        return x;
    }
    parent[x]=find_set(parent[x]);
    return parent[x];
}

bool union_set(int u,int v)
{
    int x=find_set(u);
    int y=find_set(v);
    if(x==y)
    {
        return false;
    }
    if(sizer[x]>sizer[y])
    {
        sizer[x]+=sizer[y];
        parent[y]=x;
    }
    else
    {
        sizer[y]+=sizer[x];
        parent[x]=y;
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
        string s;
        int x,y;
        cin>>s>>x>>y;
        if(s=="union")
        {
            union_set(x,y);
        }
        else
        {
            bool check=find_set(x)==find_set(y);
            if(check==true)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}