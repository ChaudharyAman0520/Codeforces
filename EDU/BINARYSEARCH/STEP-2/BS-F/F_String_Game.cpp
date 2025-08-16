#include<bits/stdc++.h>
using namespace std;
bool canMake(int mid,string s,string t,vector<int>&v)
{
    for(int i=0;i<mid;i++)
    {
        s[v[i]-1]='?';
    }
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==t[j])
        {
            j++;
        }
    }
    bool result = j==t.length();
    // cout<<"Result "<<result<<endl;
    return result;
}
main()
{
    string s,t;
    cin>>s>>t;
    int n=s.length();
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int L=0,R=n,mid;
    while(L+1<R)
    {
        mid=L+(R-L)/2;
        // cout<<mid<<endl;
        if(canMake(mid,s,t,v))
        {
            L=mid;
        }
        else
        {
            R=mid;
        }
    }
    cout<<L<<endl;
}