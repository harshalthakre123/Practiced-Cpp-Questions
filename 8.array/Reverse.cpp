#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[]={1, 2, 3, 4, 5};
    for(int i=0; i<=n/2; ++i)
    {
        int temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;
    }
    for(int i=0; i<n; ++i)
    {
        cout<<arr[i];
    }
}