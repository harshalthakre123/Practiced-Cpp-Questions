#include<iostream>
using namespace std;
int main()
{

    int arr[n]={1, 2, 1, 2, 1}
    int n=5, y=arr[n];
    
    for(int i=0; i<n/2; ++i)
    {
        int temp= arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;
    }
    if(y==arr[n])
    {
        cout<<"Array is Palindrome";
    }
}