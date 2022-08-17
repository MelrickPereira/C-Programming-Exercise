#include <iostream>
#include <conio.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partition(int* arr,int low,int high)
{
    int pivot = arr[high];
    int i = low-1;
    for (int j = low; j < high; j++)
    {
        if(arr[j]<pivot)         // check if pivot is greater than element at 'j;
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
    
    
}
int Select(int* arr,int low,int high,int k)
{
    while(true)
    {
        int pi;
        pi = partition(arr,low,high);
        if(k==pi)
            return pi;
        else if(k<pi)
            high = pi-1;
        else
            low = pi+1;
        

    }
   


}
int main()
{
    int arr[10] = {2,1,5,3,6,7,0,9,8,4};
    int index;
    int k = 2;
    index = Select(arr,0,9,k-1);
    cout<<"The "<<k<<" th smallest element is : "<< arr[index];
    _getch();
    return 0;
}