#include <iostream>
using namespace std;
 
int fibo_recur(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibo_recur(n - 1) + fibo_recur(n - 2);;
}


int main()
{
    int n;
    while (1)
    {
        cout<<"Enter the integer n to find nth fibonnaci no.(0 to exit): ";
        cin>>n;
        if (n == 0)
            break;
        cout<<fibo_recur(n)<<endl;
    }
    return 0;
}