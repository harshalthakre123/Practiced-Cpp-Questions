#include<iostream>
using namespace std;
int main()
{
    int a, b, lcm;
    cout<<"Enter first no.";
    cin>>a;
    cout<<"enter second no.";
    cin>>b;
    if(a>b)
    {
        for(int i=a; ;i=i+a)
        {
            if(i%a==0  && i%b==0)
            {
                lcm=i;
                break;
            }
        }
        cout<<"LCM is:"<<lcm;
    }
    else if(a<b)
    {
        for(int i=b; ;i=i+b)
        {
            if(i%a==0  && i%b==0)
            {
                lcm=i;
                break;
            }
        }
        cout<<"LCM is:"<<lcm;
    }
    else
    {cout<<a<<"is lcm";
    }
     
}