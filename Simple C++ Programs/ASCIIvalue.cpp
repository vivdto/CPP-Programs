#include<iostream>
using namespace std;

class ASCII
{
    char ch; int n;
    public:
    void input()
    {
        cout<<"enter any character...";
        cin>>ch;
    }
    void output()
    {
        n = ch;
        cout<<n;
        //w/o using typecasting
        //cout<<"ASCII Value of"<<ch<<" is "<<(int)ch;
    }

};

int main ()
{
    ASCII obj;
    obj.input();
    obj.output();
    return 0;
}