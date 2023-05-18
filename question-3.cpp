#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,d,e,f;
    cout<<"input principle amount ";

    cin>>a;
    cout<<"input rate of interest";
    cin>>b;
    cout<<"input time";
    cin>>c;
    cout<<"simple interest is"<<endl;
    d=a*b*c;
    cout<<d<<endl;
    cout<<"compound interest";
    e=1+b;
    f=a*pow(e,c)-a;
    cout<<f;
   

     
     return 0;

}
