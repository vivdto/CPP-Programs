#include<iostream>
using namespace std;

int main ()
{

int i, rev =0;
cout<<"Enter a number to get reverse";

cin>>i;
for ( ;i>0; i=i/10 )
rev = (rev*10)+i%10;

cout<<rev;
return 0;
}