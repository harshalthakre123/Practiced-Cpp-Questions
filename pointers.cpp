#include <bits/stdc++.h>
using namespace std;
void pointing()
{
    int var = 20;
    int* ptr;
    ptr = &var;

    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
}
int main() 
{ 
  pointing(); 
  return 0;
}