#include<iostream>
using namespace std;
int main()
{
    int arr[]={1, 2, 1, 2, 3};
    int j=0;
    for(int i=0 ; i<5; ++i)
    {
        if(arr[i]!=2)
        {
            arr[j]=arr[i];
            j++;
        }
    } 

    for(int i=0; i<j; ++i)
    {
        cout<<arr[i];
    }

}