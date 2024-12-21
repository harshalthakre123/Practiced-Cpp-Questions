#include<iostream>
using namespace std;

void anagram(string &a, string &b)
{
    int n=a.length();
    int m=b.length();
    int count;
    if(n==m)
    {   
        for(int i=0; i<n; ++i)
        {
            count=0;
            for(int j=0; j<n;++j)
            {
                if(a[i]==a[j])
                {
                    count++;
                }

            }
            for(int k=0; k<m;++k)
            {
                if(b[i]==[k])
                {
                    count--;
                }
            }    
        }
        if(count==0)
        {
            cout<<"Anagram";
        }
        else{
            cout<<"Not Anagram";
        }
    }
    else{
        cout<<"Not an Anagram";
    }

}

int main()
{
    string a="Harshal", b="aaarsal";
    anagram(a, b);

}