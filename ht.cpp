//Sum of 10 natural nums

#include<iostream>
using namespace std;

int summ(int num){
    int sum=0;
    for(int i=1; i<=num; ++i)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    // calling summ function for the sum of 10 natural numbers
    cout<<summ(10);
}