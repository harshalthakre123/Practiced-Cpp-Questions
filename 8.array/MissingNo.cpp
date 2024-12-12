#include<iostream>
using namespace std;
int main()
{
    int arr[]={10, 15, 16, 17, 20
    };
    int n=5;
    // for(int i=0; i<n; ++i)
    // {
    //     if((arr[i+1]-arr[i])==2)
    //     {
    //         cout<<arr[i]+1<<", ";
    //     }
    // }

    for(int i=0; i<n-1; ++i)
    {
        int d=arr[i+1]-arr[i];
        if(d>1)
        {
            for(int j=1; j<d; ++j)
            {
                cout<<arr[i]+j<<", ";
            }
            cout<<"\n";
        }
    }
}