#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem;
    cout<<"input a number you want to reverse"<<endl;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        cout<<rem;
        n=n/10;

    }
     return 0;
}
