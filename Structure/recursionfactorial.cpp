// Factorial of a No. Factorial .
#include<iostream>
using namespace std;
int summ(int num)
{
    if(num<=1)
    {
        return num;        
    }
return num*summ(num-1);
}

int main()
{
    int a;
    cout<<"Enter any number:";
    cin>>a;
    cout<<summ(a);
}