#include<iostream>
using namespace std;
int main()
{
    int n, r, num, sum;
    for(n=100; n<=150; n++)
    {
        sum=0;
        num=n;
        for( ; n!=0; )
        {
            r=n%10;
            sum+=(r*r*r);
            n=n/10;
        }
        if(num==sum){
            cout<<num<<", ";
        }
    }
}