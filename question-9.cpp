#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,avg,sum;
    cout<<"input the marks of five subject";
     cin>>a>>b>>c>>d>>e;
     sum=a+b+c+d+e;
     avg=sum/5;
     if(avg>=90&&avg<=100)
     {
        cout<<"A ";
     }
     if(avg>=80&&avg<90)
     {
        cout<<"B";
     }
     if(avg>=60&&avg<80)
     {
        cout<<"C";
     }
     if(avg<60)
     {
        cout<<"D";
     }
     return 0;

}
