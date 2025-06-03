#include<bits/stdc++.h>
using namespace std;
vector<int> parent;
vector<int> sizer;
vector<int> points;
void make_set(int n)
{
    parent.resize(n+1);
    sizer.assign(n+1,1);
    points.resize(n+1,0);
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
        cin>>s;
        if(s=="join")
        {
            int x,y;
            cin>>x>>y;
            union_set(x,y);
        }
        else if(s=="get")
        {
            int x;
            cin>>x;
            cout<<points[x]<<endl;
        }
        else
        {
            int x,v;
            cin>>x>>v;
            int par=find_set(x);
            for(int i=1;i<=n;i++)
            {
                
            }
        }
    }
}