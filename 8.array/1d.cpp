#include<iostream>
using namespace std;
int main()
{
    // declaration
    int arr[5];
    
    // insertion
    for(int i=0; i<5; ++i)
    {
        cout<<"enter value";
        cin>>arr[i];
    }
    cout<<"\n";

    // abstraction
    for(int j=0; j<5; ++j)
    {
        cout<<arr[j];
    }

    // Updation
    arr[2]=6;

    // abstraction
    for(int j=0; j<5; ++j)
    {
        cout<<arr[j];
    }
    cout<<"\n";
    cout<<arr[4];
    
}