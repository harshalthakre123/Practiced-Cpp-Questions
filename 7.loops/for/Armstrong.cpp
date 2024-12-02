#include<iostream>
using namespace std;
int main()
{
    int n, r, sum=0, num;
    cout<<"enter any no.";
    cin>>n;
    num=n;
    if(n>99 && n<1000)
    {
        for( ; n!=0; )
        {
            r=n%10;
            sum+=(r*r*r);
            n=n/10;
        }
        if(num==sum){
            cout<<"armstrong";
        }
        else
        {
        cout<<"Not an Armstrong No.";
        }
    }
}