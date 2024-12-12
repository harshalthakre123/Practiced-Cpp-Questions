#include<iostream>
using namespace std;
int main()
{
    int arr[]={10, 0, 20, 30, 0, 40, 50};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
    int j=0;
    for(int i=0; i<n; ++i)
    {
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=j; i<n; ++i)
    {
        arr[j]=0;
        j++;
    
    }
    for(int i=0; i<n; ++i)
    {
        cout<<arr[i]<<", ";
    }
}