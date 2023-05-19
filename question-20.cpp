#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int i,n,m,a,b,f;
    vector<int>v;
    vector<int>r;
    vector<int>q;
    cout<<"enter the size of vector first and second"<<endl;
    cin>>n;
    cout<<"enter the element of vector"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    
     cout<<"enter the element of vector"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>b;
        r.push_back(b);
    }
    
    for(i=0;i<n;i++)
    {
      f=v[i]+r[i];
      q.push_back(f);
    }
     cout<<"sum of vectors "<<endl;
    for(i=0;i<n;i++)
    {
      cout<<q[i];
    }
     return 0;
}
