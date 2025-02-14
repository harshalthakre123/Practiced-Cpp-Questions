#include<iostream>
using namespace std;

int main()
{
    int n, sum=0;
    cout<<"To print sum of n numbers\n";
    cout<<"Enter the value of n\n";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<sum;
}