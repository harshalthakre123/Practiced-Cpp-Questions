#include<iostream>
using namespace std;
int main()
{
    int arr[]={1, 2, 1, 3, 4, 1, 2, 3};
    
    for(int i=0; i<8; ++i)
    {
        // int key=arr[i];
       int count=0;
        for(int j=i+1; j<8; ++j)
        {
            if(arr[i]==arr[j] && arr[i]!=-1)
            {
                count++;
                arr[j]=-1;
            }
        }
        if(count>0)
        {
            cout<<"Duplicate value is:"<<arr[i]<<" "<<count<<" times repeated\n";
        }
    }
}