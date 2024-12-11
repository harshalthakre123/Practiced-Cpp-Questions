#include<iostream>
using namespace std;
int main()
{
    int arr[]={20, 40, 60, 80, 100};
    int n=5;
    for(int i=0; i<n-1; ++i)
    {
        if(arr[i]>arr[i+1])
        {
            cout<<"not in ascending order";
            return 0;
        }
    }
    cout<<"Ascending order";

}