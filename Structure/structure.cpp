#include<iostream>
using namespace std;

struct info
{
    int a;
    struct info *link;
};


int main()
{
    info p;
    info c;

    p.link=NULL;
    p.a=12;

    c.link=NULL;
    c.a=13;

    p.link=&c;
    c.link=&p;
    cout<<p.link->a<<"\n";
    cout<<c.link->a;

}