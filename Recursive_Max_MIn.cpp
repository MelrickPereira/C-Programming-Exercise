#include <iostream>
#include <conio.h>

using namespace std;

void MaxMin(int* arr,int low,int high,int &Max,int &Min)
{
    if(low==high)
    {
        Max = arr[low];
        Min = arr[low];
    }
    else if (low == high-1)
    {
        if(arr[low]<arr[high])
        {
            Min = arr[low];
            Max = arr[high];
        }
        else
        {
            Max = arr[low];
            Min = arr[high];
        }
    }
    else
    {
        int mid;
        int Max1,Min1;
        mid = (low+high)/2;
        MaxMin(arr,low,mid,Max,Min);
        MaxMin(arr,mid+1,high,Max1,Min1);
        if(Max<Max1)
            Max = Max1;
        if(Min>Min1)
            Min = Min1;
    }
    
}
int main()
{
    int Max,Min;
    int arr[10] = {4,2,1,6,31,52,12,75,43,5};
    MaxMin(arr,0,9,Max,Min);
    cout<<"Max Element is : "<<Max<<endl;
    cout<<"Min Element is : "<<Min<<endl;
    _getch();
    return 0;
}