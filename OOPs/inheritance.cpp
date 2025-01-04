// MULTIPLE INHERITANCE
#include<iostream>
using namespace std;

class a{
public: int roll=123;
};
class b{
public: string name ="HT";
};

class c: public a, public b{
    public:
    void display(){
    
    cout<<roll<<name;
    }
};

int main()
{
    c obj;
    obj.display();

}