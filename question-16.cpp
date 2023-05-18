#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,rem;
    cout<<"input a number of digit more than 1"<<endl;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        s=s+rem;
        n=n/10;
    }
    cout<<"sum of digits is"<<endl<<s;
     return 0;
}
