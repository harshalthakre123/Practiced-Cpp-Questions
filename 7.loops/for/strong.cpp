#include<iostream>
using namespace std;
int main()
{
    int n,sum=0, r, num; 
    cout<<"Enter the value of n";
    cin>>n;
    num=n;
    for( ; n!=0; )
    {
        int fact=1; 
        r=n%10;
        for(int i=1; i<=r; i++)
        {

            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(num==sum)
    cout<<"Strong No.";
    else{
        cout<<"Not a Strong No.";
    }
}