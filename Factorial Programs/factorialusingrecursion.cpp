#include<iostream>
using namespace std;
//Function Prototype.
int fact(int n)
{
if(n == 0 || n ==1){
return 1;
}
else
return n*fact(n-1);
}

int main ()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"the factorial of "<<num<<"is "<< fact(num)<<endl;
}