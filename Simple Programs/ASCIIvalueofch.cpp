#include<iostream>
using namespace std;

class ASCII
{
    char ch;
    public:
    void input()
    {
        cout<<"enter any character...";
        cin>>ch;
    }
    void output()
    {
        //using typecasting
        cout<<"ASCII Value of"<<ch<<" is "<<(int)ch;
    }

};

int main ()
{
    ASCII obj;
    obj.input();
    obj.output();
    return 0;
}