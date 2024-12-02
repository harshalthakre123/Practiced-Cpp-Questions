// Perfect No. Program:-

#include<iostream>
using namespace std;
int main()
{
    int sum=0, num;
    cout<<"Enter any No.";
    cin>>n;
    num=n;
    for(int i=1; i<=(n)/2; ++i)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==num)
    {
        cout<<"Perfect No.";
    }    
    else{
        cout<<"Not a Perfect No.";
    }
}