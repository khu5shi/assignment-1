#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,e=0,o=0;
    cout<<"input the number till you want sum of even and odd number ";
     cin>>a;
     for(int i=1;i<=a;i++)
     {
        if(i%2==0)
        {
            e=e+i;
        }
        else
        {
            o=o+i;
        }
     }
     cout<<"the sum  of even number is"<<endl<<e<<endl;
     cout<<"the sum of odd number is "<<endl<<o<<endl;
     return 0;
}
