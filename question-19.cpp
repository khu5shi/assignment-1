#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int i,n,s=0,a;
    vector<int>v;
    cout<<"enter the size of vector"<<endl;
    cin>>n;
    cout<<"enter the element of vector"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    
    for(i=0;i<n;i++)
    {
       s=s+v[i];
    }
    cout<<"sum is ="<<s;
     return 0;
}
