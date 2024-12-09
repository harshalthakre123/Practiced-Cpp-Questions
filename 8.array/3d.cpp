#include<iostream>
using namespace std;
int main()
{
    // Declaration
    int arr[2][2][2];
    // insertion
    for(int d=0; d<2; ++d)
    {
        for(int r=0; r<2; ++r)
        {
            for(int c=0; c<2; ++c)
            {
                cout<<"enter the value";
                cin>>arr[d][r][c];
            }
        }
    }
    // abstraction
    for(int d=0; d<2; ++d)
    {
        for(int r=0; r<2; ++r)
        {
            for(int c=0; c<2; ++c)
            {
                cout<<arr[d][r][c];
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    cout<<"\n";

    //updation
    arr[0][1][1]=55; 
// abstraction
    for(int d=0; d<2; ++d)
    {
        for(int r=0; r<2; ++r)
        {
            for(int c=0; c<2; ++c)
            {
                cout<<arr[d][r][c];
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    
}