#include<iostream>
using namespace std;

int main ()
{   

    int num, count = 0;
    cout<<"Hey! Enter a number: ";
    cin>>num;
    int j = 1;
            while (j<=num)
                { if (num%j==0)
                count++;
                j++; }
        //    cout<<count;

            if (count>3)
            cout<<"It's not a prime number and here's its factorial: "<<count;
            else if (count>=0 && count<=3)
            cout<<"It's a prime number and here's it's factorial: "<<count;

    return 0;
}


// Dry Run!
/*


    // int i = 7;
    // j = 1;
 // while (1<=7)
 {
    if (i%j==0)
    count++;
    j++; // j =2, 3...till = i value.
    cout<<
 }    


*/