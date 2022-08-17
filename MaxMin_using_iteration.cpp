#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int Max_Min[2];

void MaxMin(int* arr)
{
    int max =arr[0];
    int min = arr[0];
 
    for(int i=1;i<10;i++)
    {
        if(arr[i]>max) 
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }    
    }
   
    Max_Min[0] = max;
    Max_Min[1] = min;
    
}
int main()
{

    int arr[10] = {23,7,2,7,4,8,12,27,6,3};
    MaxMin(arr);
    cout<<"Max :"<<Max_Min[0]<<endl;
    cout<<"Min :"<<Max_Min[1]<<endl;


   _getch();
   return 0;
}