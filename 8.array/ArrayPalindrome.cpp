#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[n]={1, 2, 1, 2, 1}; 

    // //Method 1;---------------------------------------------------------------------------------------

    // int array[n];
    // // array[]=arr[];

    
    // for(int i=0; i<n; ++i)
    // {
    //     array[i]=arr[i];
    // }


    // for(int i=0; i<n/2; ++i)
    // {
    //     int temp= arr[n-i-1];
    //     arr[n-i-1]=arr[i];
    //     arr[i]=temp;
    // }


    // for(int i=0; i<n; ++i)
    // {
    //     if(array[i]!=arr[i])
    //     {
    //         cout<<"Array is not Palindrome.";
    //         return 0;
    //     }
    // }
    // cout<<"Array is Palindrome.";



    // //Method 2;---------------------------------------------------------------------------------------------

    // bool palindrome=true;
    // for(int i=0; i<n/2; ++i)
    // {
    //     int temp= arr[n-i-1];
    //     if(arr[i]!=temp)
    //     {
    //         palindrome=false;
    //     }
    //     arr[n-i-1]=arr[i];
    //     arr[i]=temp;
        
    // }
    // if(palindrome==false)
    // {
    //     cout<<"It is not Palindrome.";
    // }
    // else
    // {
    //     cout<<"It is Palindrome.";
    // }

    // //Method-3;

    // int s=0;
    // int e=4;
    // while(s<=e)
    // {
    //     if(arr[s]!=arr[e])
    //     {
    //         cout<<"Not a Palindrome.";
    //         return 0;
    //     }
    //     s++;
    //     e--;
    // }
    // cout<<"palindrome";

    // //Method-4;

    for(int i=0; i<=n/2; ++i)
    {
        if(arr[i]!=arr[n-i-1])
        {
            cout<<"Not a Palindrome.";
            return 0;
        }
    }
    cout<<"Palindrome";

}