// multiple function with same name cause function overloading. 

// There are two types of function overloading.
// 1. no. of parameter.
// 2. datatype of parameter.
// 3. overloading with the help of namespace;


#include<iostream>
using namespace std;

//1. no. of parameter=========================================================================

// int summ(int a, int b)
// {
//     return a+b;
// }
// int summ(int a)
// {

//     return a+10;
// }
// int main()
// {
//     int a=15, b=25;
//     cout<<summ(a, b);
//     cout<<summ(a);
// }


// 2. datatype of parameter

// void func(char a)
// {
//     cout<<"the value of function is "<<a<<endl;
// }
// void func(int a)
// {
//     cout<<"the value of function is "<<a;
// }

// int main()
// {
//     func('a');
//     func(11);
// }


// 3. Function overloading by namespace.

namespace first
{
    void display()
    {
        cout<<"first\n";
    }
}

namespace second
{
    void display()
    {
        cout<<"second";
    }
}

int main()
{
    first::display();
    second::display();
}
