#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,p,s=0;
    cout<<"input a number you want to check armstrong or not"<<endl;
    cin>>n;
    p=n;
    while(n!=0)
    {
        rem=n%10;
        s=s+rem*rem*rem;
        n=n/10;

    }
    if(s==p)
    {
        cout<<"number is armstrong";

    }
    else
    {
        cout<<"number is not armstrog";
    }
     return 0;
}
