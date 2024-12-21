#include<iostream>
using namespace std;

int Balance(string &a)
{
    int n=a.length();

    int cb=0, p=0, sqb=0;
    for(int i=0; i<n; ++i)
    {
        if(a[i]=='}')
        {
            cb++;
        }
        else if(a[i]=='{')
        {
            cb--;
        }
        else if(a[i]=='(')
        {
            p++;
        }
        else if(a[i]==')')
        {
            p--;
        }
        else if(a[i]=='[')
        {
            sqb++;
        }
        else if(a[i]==']')
        {
            sqb--;
        }
        else
        {
            cout<<"Unknown Paranthesis (other character found)";
            return 0;
        }
    }

    if(cb==0 && p==0 && sqb==0)
    {
        cout<<"Paranthesis is Balanced";
    }
    else{
        cout<<"Parenthesis is Unbalanced";
    }
}



int main()
{
    string a="{[({)]}}";
    Balance(a);

}