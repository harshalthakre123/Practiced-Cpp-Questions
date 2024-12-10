#include<iostream>
using namespace std;
int main()
{
    int arr[]={1, 2, 4, 3, 4, 1};

    // for(int i=1; i<6; ++i)
    // {
    //     if(arr[i]==5)
    //     {
    //         cout<<"found\n";
    //         return 0;
    //     }
            
    // }
    // cout<<"not found";

    for(int i=1; i<6; ++i)
    {
        if(arr[i]==5)
        {
            cout<<"found\n";
            return 0;
        }
            
    }
    cout<<"not found";
}