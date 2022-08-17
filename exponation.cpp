#include <iostream>
#include <conio.h>

using namespace std;


int Exponation(int base,int power)
{
    int result = 1;
    while(power>0)
    {
        
        while(power%2==0)
        {
            base = base*base;
            power = power/2;
        }
        result = result*base;
        power = power - 1;
    }
    return result;
}
int main()
{
    cout<<"Enter the base: ";
    int base;cin>>base;
    cout<<"Enter power: ";
    int power;cin>>power;
    cout<<Exponation(base,power);

    _getch();
    return 0;
}