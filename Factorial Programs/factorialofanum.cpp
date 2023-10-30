#include<iostream>
using namespace std;

int main ()
{


int n;
cout<<"Enter the number to find the factorial: ";
cin>>n;

int fac = 1;
while (n>=1)
{
    fac = fac *n;
    n = n-1;
}


cout<<"Factorial is: "<<fac;



    return 0;
}