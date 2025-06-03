#include<bits/stdc++.h>
using namespace std;
vector<int> parent;
vector<int> sizer;
vector<int> maxi;
vector<int> mini;
void make_set(int n)
{
    parent.resize(n+1);
    sizer.assign(n+1,1);
    maxi.resize(n+1);
    mini.resize(n+1);
    for(int i=1;i<=n;i++)
    {
        maxi[i]=i;
        mini[i]=i;
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
    if(sizer[x]>=sizer[y])
    {
        sizer[x]+=sizer[y];
        parent[y]=x;
        maxi[x]=max(maxi[x],maxi[y]);
        mini[x]=min(mini[x],mini[y]);
    }
    else
    {
        sizer[y]+=sizer[x];
        parent[x]=y;
        maxi[y]=max(maxi[y],maxi[x]);
        mini[y]=min(mini[y],mini[x]);
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
        if(s=="union")
        {
            int x,y;
            cin>>x>>y;
            union_set(x,y);
        }
        else
        {
            int x;
            cin>>x;
            int par=find_set(x);
            cout<<mini[par]<<" "<<maxi[par]<<" "<<sizer[par]<<endl;
        }
    }
}