#include<iostream>
using namespace std;
int main()
{
    int a1=0, a2=1, a3, n;
    cout<<"enter no. of terms";
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        if(i==1)
        {
            cout<<a1<<", ";
            continue;
        }
        if(i==2)
        {
            cout<<a2<<", ";
            continue;
        }
        a3=a1+a2;
        cout<<a3<<", ";
        a1=a2;
        a2=a3;
    }
}