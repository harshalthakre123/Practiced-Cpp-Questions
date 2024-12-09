#include<iostream>
using namespace std;
int main()
{
    int arr[]={1, 2, 1, 3, 4, 1, 2, 3};
    for(int i=0; i<8; ++i)
    {
        bool  dup= false;
        for(int j=i+1; j<8; ++j)
        {
            if(arr[i]==arr[j] && arr[i]!=-1)
            {
                dup=true;
                arr[j]=-1;
            }
        }
        if(dup==false && arr[i]!=-1)
        {
            cout<<arr[i]<< " is unique\n";
        }
    }
}