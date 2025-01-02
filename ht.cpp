//Sum of array

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
    cout<<summ(10);
}