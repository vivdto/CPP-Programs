#include<iostream>
using namespace std;

int main ()
{


int n, sum = 0; // always set to zero! in all the scenarios
cout<<"Enter Number:";
cin>>n;
while (n>0)
{
    sum= sum +n%10;
    n = n/10;
}


cout<<"/n Sum of Digits = "<<sum;



return 0;
}


//DryRun Concept
//n = 231
// int sum = 0;
// now new sum = sum + n/10 * 231%10 = 23 , " Jab v modulous 10 karo last ka digit mil jayega!"
// now n / 10 -- divide kro
//divide krte h toh last ki value lose hoti h, 231/10 = 23, 23/10 = 2
// while loop chalte rhega to check if the condition is true or not
// Jab divide nhi jayega toh vahi hoga reminder
//return 