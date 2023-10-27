#include<iostream>
using namespace std;

int main ()
{



int n, sum = 0;
cout<<"enter number";
cin>>n;
//( As the n was already initialized)
for ( ;n>0; n = n/10)
sum = sum + n%10;
cout<<sum;


    return 0;
}