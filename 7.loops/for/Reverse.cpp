#include<iostream>
using namespace std;
int main()
{
    int n, r, rev=0;
    cout<<"Enter a no.";
    cin>>n;
    // for( ; n>0; n=n/10)
    // {
    //     r=n%10;
    //     rev=rev*10+r;
    // }
    // cout<<rev;

    // While loop
    // while(n>0)
    // {
    //     r=n%10;
    //     rev=rev*10+r;
    //     n=n/10;
    // }
    // cout<<rev;

// Do While loop
do{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
while(n>0);
cout<<rev;
}