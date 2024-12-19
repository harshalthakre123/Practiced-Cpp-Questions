// Function is a method or a block of codes which we can use or call when ever required.
// there are two types of functions
// 1. Predefined functions.
// 2. Userdefined functions. 



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