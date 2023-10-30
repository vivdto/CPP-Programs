#include<iostream>
using namespace std;

int main ()
{
    int i, count = 0;
    int j = 1;

        cin>>i;

            for (j=1 ; j<=i ; j++)
                {
                    if(i%j == 0)
                    count++;
                }

                  if (count == 2)
                    cout<<"Prime number, with number of factorial "<<count;
                    else 
                    cout<<"Not a prime number, with number of factorial "<<count;


    return 0;
}