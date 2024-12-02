// Perfect no. between 1 to 500:-

#include<iostream>
using namespace std;
int main()
{
    int sum=0, num;

    for(int n=1; n<=500; ++n)
    {
        num=n;
        for(int i=1; i<=(n)/2; ++i)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }
        if(sum==num)
        {
            cout<<sum<<" ";
        }
        sum=0;
    }
}