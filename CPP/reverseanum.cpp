#include<iostream>
using namespace std;

int main ()
{

int i, rev = 0;
cout<<"enter number to find reverse";
cin>>i;
while (i>0)
{
    rev = (rev * 10) + i %10;
    i = i/10;
}

cout<<"Reverse ="<<rev;


    return 0;
}






/*
Dry Run:
i = 234;
rev = 0;
rev = (rev*10)+i%10
= (0*10) + 234%10 
= 4;
...and so on!
Jab v Modulous karte h toh last value aayeag
divide krenge toh last value lose hoga
i/10;
234/10=23
23/10 =2
2/10=0
(2 Reminder)
*/

