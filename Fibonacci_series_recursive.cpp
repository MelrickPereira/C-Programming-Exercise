#include <iostream>
#include <conio.h>

using namespace std;

void fib(int n)
{
    static int n1 =0,n2 =1 ,n3;

    if(n>0)
    {
        
        
        n3 = n1 + n2;
        cout<< n3 << " ";
        n1 = n2;
        n2 = n3;
        fib(n-1);
    }

   
}
int main()
{
    cout<<"Enter a number: ";
    int n;cin>>n;
    if(n == 1)
    {
        cout<<" 0 ";
    }
    else
    {
        cout<<" 0 1 ";
        fib(n-2);
    }
    
    
    _getch();
    return 0;
}