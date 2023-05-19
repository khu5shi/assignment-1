#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int i,n,a,max,min;
    vector<int>v;
    cout<<"enter the size of vector "<<endl;
    cin>>n;
    cout<<"enter the element of vector"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    max=v[0];
    for(i=1;i<n;i++)
    {
        if(v[i]>max)
        {
            max=v[i];
        }
        
    }
    min=v[0];
     for(i=1;i<n;i++)
    {
        if(v[i]<min)
        {
            min=v[i];
        }
        
    }

    cout<<"max and min numbers are"<<endl<<max<<endl<<min;
    
     
     return 0;
}
