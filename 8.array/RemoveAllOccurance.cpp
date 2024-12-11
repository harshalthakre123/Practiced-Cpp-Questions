#include<iostream>
using namespace std;
int main()
{
    int n=5, arr[n]={1, 2, 1, 2, 3};
    
    // Method-1;
    for(int i=0; i<n; ++i)
    {
        // int count=0;
        for(int j=i+1; j<n; ++j)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=-1;
                arr[j]=-1;
            }
        }
        if(arr[i]!=-1)
        {
            cout<<arr[i];
        }
    }



}