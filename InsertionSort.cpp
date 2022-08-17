#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

void InsertionSort(vector<int> &arr,int n)
{
    for (int j = 1; j < n; j++)
    {
        int i = j-1;int item = arr[j];
        while(i>=0  && arr[i]>item)
        {
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = item;
        
    }
    
}
int main()
{
    cout<<"Enter the size of the array : ";
    int n;cin>>n;
    vector<int> arr;
    cout<<"Enter the values in unsorted order: ";
    for (int i = 0; i < n; i++)
    {
        cout<<"arr["<<i<<"] = ";
        int a;cin>>a;
        arr.push_back(a);
    }
    InsertionSort(arr,n);

    for (int i = 0; i < n;  i++)
    {
        cout<<arr[i]<<" ";
    }
    
   
    _getch();
    return 0;
}