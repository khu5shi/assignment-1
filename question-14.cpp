#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a=0,b=1,c=0;
    cout<<"input the term you want the fibonacci series"<<endl;
    cin>>n;
    cout<<"fibonacci series are"; 
    for(i=1;i<=n;i++)
    {
        cout<<c;
        a=b;
        b=c;
        c=a+b;
        

    }
     return 0;
}
