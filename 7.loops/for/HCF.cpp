#include<iostream>
using namespace std;
int main()
{
    int a, b, hcf, lcm;
    cout<<"Enter first no.";
    cin>>a;
    cout<<"enter 2nd no.";
    cin>>b;
    for(int i=1; i<=a; ++i)
    if(a%i==0 && b%i==0)
    {
        hcf=i;
    }
    cout<<"hcf is:"<<hcf;
    lcm=(a*b)/hcf;
    cout<<"LCM is:"<<lcm;
     
}