#include <iostream>
#include <conio.h>

using namespace std;

void Fibonacci_Using_Iteration(int n)
{
    int num1 = 0;
    int num2 = 1;
    if(n==1)
    {
        cout<<num1;
    }
    if(n==2)
    {
        cout<<num1<<" ";
        cout<<num2;
    }
    else
    {
        cout<<num1<<" ";
        cout<<num2<< " ";
        for (int i = 2; i < n; i++)
        {
            int num3 = num1 + num2;
            cout<<num3<<" ";
            num1 = num2;
            num2 = num3;

        }
        
    }
    
}
int main()
{
    cout<<"Enter the number: ";
    int n;cin>>n;
    Fibonacci_Using_Iteration(n);
    //Fibonacci_Using_Recursion(n);
    
    _getch();
    return 0;
}