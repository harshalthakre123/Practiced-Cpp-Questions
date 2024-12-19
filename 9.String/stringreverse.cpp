//string reverse and palindrome. 

#include<iostream>
using namespace std; 

void revers(string &a)
{
    int n=a.length();
    char temp;
    // for(int i=0; i<n/2; ++i)
    // {
    //     temp =a[n-i-1];
    //     a[n-i-1]=a[i];
    //     a[i]=temp;
    // }
    int i=0;
    while(i<n/2)
    {
        temp =a[n-i-1];
        a[n-i-1]=a[i];
        a[i]=temp;
        ++i;
    }

}
void palindrome(string &a, string &b)
{
    if(a==b)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}
int main()
{
    string a="abcba";
    string b=a;
    revers(a);
    // cout<<a<<endl;
    palindrome(a,b);
    // cout<<b;
    
}