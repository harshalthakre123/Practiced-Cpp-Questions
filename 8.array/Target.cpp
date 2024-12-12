#include<iostream>
using namespace std;
int main()
{
    int arr[]={1, 2, 4, 3, 4, 1};
    for(int i=0; i<6; ++i)
    {
        if(arr[i]==4)
        {
            cout<<"found\n";
            return 0;
        }
            
    }
    cout<<"not found";
}