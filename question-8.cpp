#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout<<"input year you want to check leap year or not";
     cin>>a;
     if(a%400==0||a%4==0&&a%100!=0)
     {
        cout<<"year is leap year ";
     }
     else
     {
        cout<<"year is not leap year";
     }
     
        
     
     return 0;

}
