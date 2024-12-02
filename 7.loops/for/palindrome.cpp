#include<iostream>
using namespace std;
int main()
{
    int n, num, r, rev=0;
    cout<<"Enter a no.";
    cin>>n;
    num=n;
    for( ; n>0; )
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<"Reverse Num is "<<rev<<"\n";
    if(num==rev)
    {
        cout<<num<<" is Palindrome No.";
    }
    else
    {
        cout<<num<<" is not a Palindrome No.";
    }
}