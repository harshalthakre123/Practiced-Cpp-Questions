//Program to change the case of the Character(upper to lower and vice-versa.)

#include<iostream>
using namespace std;

void casechange(string &name)
{
    int n=name.length();
    for(int i=0; i<n; ++i)
    {
        if(name[i]>=97)
        {
            name[i]-=32;
        }
        else if(name[i]>=65)
        {
            name[i]+=32;
        }
        else{
            name[i]+=0;
        }
    }
    cout<<name;
}


int main()
{
    // int diff=int('a')-int('A'); //97-65=32
    string name="";
    cout<<"Enter any String: ";
    cin>>name;
    casechange(name);

}