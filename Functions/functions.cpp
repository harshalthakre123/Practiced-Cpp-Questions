#include<iostream>
using namespace std;

void adding(int &num)
{
    num=num+10;
}

int main()
{
    int a=15;
    adding(a);
    cout<<a;
}