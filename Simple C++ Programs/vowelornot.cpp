#include<iostream>
using namespace std;

class tocheck // Class created & Name Declared using class keyword

{
    char ch; // data member, privet by default
    public: // access specifier
    void input() //member function
    {
        cout<<"enter any char";
        cin>>ch;
    }
    void show() // member function
    {
        if(ch=='a'|| ch =='e' || ch=='i'|| ch =='o' || ch =='u' )
        cout<<"Vowel";
        else
        cout<<"Consonant";
    }
};

        int main ()
        {
                tocheck obj; // Class ka object
                obj.input();
                obj.show();
return 0;
        }

