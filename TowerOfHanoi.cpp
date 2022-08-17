#include <iostream>
#include <conio.h>

using namespace std;

void TowerOfHanoi(int n,char x,char y,char z)
{
    if(n>=1)
    {
        TowerOfHanoi(n-1,x,z,y);
        cout<<"Move top of disk "<<x<<" to "<<"top of disk "<<y<<endl;
        TowerOfHanoi(n-1,z,y,x);
    }
    
}
int main()
{
    TowerOfHanoi(3,'A','B','C');
    _getch();
    return 0;
}