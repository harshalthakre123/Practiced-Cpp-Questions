#include<iostream>
using namespace std;

bool anagram(string &a, string &b)
{
    int n=a.length();
    int m=b.length();
    if(n==m)
    {   
        int count[256]={0};
        for(int i=0; i<n; ++i)
        {
            count[a[i]]++;
            count[b[i]]--;
        }

        for(int j=0; j<256; ++j)
        {
            if(count[j]!=0)
            {
                return false;
            }
            
        }
        
    }
    else{
        return false;
    }

}

int main()
{
    string a="HARSHAL", b="harshat";

    if(anagram(a, b))
    {
        cout<<"anagram";
    }
    else{
        cout<<"not";
    }


}