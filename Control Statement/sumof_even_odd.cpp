#include<iostream>
using namespace std;

int main ()
{
  int n;			// 430
  cin >> n;
  int rem_even;
  int rem_odd;
  rem_even = rem_odd = 0;

  while (n)
    {
      int digit = n % 10;	// 220 % 10 == 0; 22%10==2; 2%10 == 2

      if (digit % 2 == 0)
	{
	  rem_even = rem_even + digit;	// rem_even == 0;
	}
      else
	{
	  rem_odd = rem_odd + digit;	//  rem_odd = 2+2=4

	}

      n = n / 10;

    }



  cout << rem_even << " " << rem_odd;

  return 0;

}
