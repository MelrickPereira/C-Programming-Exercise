#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partition(vector<int> &arr,int low,int high)
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
void QuickSort(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int pi = partition(arr,low,high);
        QuickSort(arr,low,pi-1);
        QuickSort(arr,pi+1,high);
       
    }
    
}
int main()
{
    cout<<"Enter the size of the array : ";
    int n;cin>>n;
    vector<int> arr(n);
    cout<<"Enter the values in unsorted order: ";
    for (int i = 0; i < n; i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    QuickSort(arr,0,arr.size()-1);

    for (int i = 0; i < n;  i++)
    {
        cout<<arr[i]<<" ";
    }
    
   
    _getch();
    return 0;
}