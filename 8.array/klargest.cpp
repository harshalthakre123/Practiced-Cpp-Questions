#include<iostream>
using namespace std;
int main()
{
    int arr[]={10, 20, 30, 50, 60};
    int k;
    cout<<"enter the value of k";
    cin>>k;
    for(int i=0; i<k; ++i)
    {
        for(int j=i+1; j<5; ++j)
        {
            if(arr[i]<arr[j])
            {
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<k<<"th largest no. is:"<< arr[k-1];
}