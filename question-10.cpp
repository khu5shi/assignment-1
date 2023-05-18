#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"input the task you want to perform"<<endl<<"1.sumation"<<endl<<"2.multiplicaation"<<endl<<"3.division"<<endl<<"4.subustraction"<<endl<<"5.square root"<<endl;
     cin>>a;
     cout<<"enter the the number you want to perform task"<<endl;
     cin>>b>>c;
     switch(a)
     {
        case 1:
        int sum;
        sum=b+c;
        cout<<"sumation is"<<endl<<sum;
        break;
        case 2:
        int mult;
        mult=b*c;
        cout<<"multiplication is"<<endl<<mult;
        break;
        case 3:
        int div;
        div=b/c;
        cout<<"division is "<<endl<<div;
        break;
        case 4:
        int sub;
        sub=b-c;
        cout<<"substraction is"<<endl<<sub;
        break;
        case 5:
        int r,p;
        r=sqrt(b);
        p=sqrt(c);
        cout<<"square root of given two numbers are"<<endl<<r<<endl<<p;


     }
     return 0;

}
