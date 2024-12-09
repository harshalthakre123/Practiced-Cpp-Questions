#include<iostream>
using namespace std;
int main()
{
    int arr[]={1, 2, 1, 3, 4, 1, 2, 3};
    
    // for(int i=0; i<8; ++i)
    // {
    //    int count=0;
    //     for(int j=i+1; j<8; ++j)
    //     {
    //         if(arr[i]==arr[j] && arr[i]!=-1)
    //         {
    //             count++;
    //             arr[j]=-1;
    //         }
    //     }
    //     if(count>0)
    //     {
    //         cout<<"Duplicate value is:"<<arr[i]<<" "<<count<<" times repeated\n";
    //     }
    // }

    for(int i=0; i<8; ++i)
    {
       int count=0;
        bool  dup= false;
        for(int j=i+1; j<8; ++j)
        {
            if(arr[i]==arr[j] && arr[i]!=-1)
            {
                count++;
                dup=true;
                arr[j]=-1;
            }
        }
        if(dup==true)
        {
            cout<<arr[i]<< " is repeated "<<count<<" times\n";
        }
    }
}