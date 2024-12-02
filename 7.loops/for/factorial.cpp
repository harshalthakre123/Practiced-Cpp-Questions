#include<iostream>
using namespace std;
int main()
{
    int n, fact=1;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=n; i>0; --i)
    {
        fact*=i;
    }
    cout<<fact;
}