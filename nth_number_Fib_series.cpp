#include <iostream>
#include <conio.h>

using namespace std;

int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
    
}
int main()
{
    int n;
    cin>>n;
    cout<<n<<"th number of the Fibonacci series is "<<fib(n);
    _getch();
    return 0;
}