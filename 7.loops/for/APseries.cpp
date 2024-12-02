#include<iostream>
using namespace std;
int main()
{
    int a, d, n;
    cout<<"Enter the value of first term:";
    cin>>a;
    cout<<"Enter the difference between two values:";
    cin>>d;
    cout<<"Enter the total no. of terms:";
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cout<<a+i*d<<", ";
    }
}