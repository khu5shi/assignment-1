#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=1;
    cout<<"input the number whos factorial you want ";
     cin>>a;
     for(int i=1;i<=a;i++)
     {
        b=b*i;
     }
     cout<<"the factorial of number is"<<endl<<b;
     
     return 0;
}
