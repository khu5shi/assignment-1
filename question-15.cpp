#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,f=0;
    cout<<"input the number you want to check prime or not"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;

        }

    }
    if(f==1)
    {
        cout<<"not prime"<<endl;

    }
    else
    {
        cout<<"prime";
    }

     return 0;
}
