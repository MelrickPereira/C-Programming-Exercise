#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

void Merge(vector<int> &arr,int low,int mid,int high)
{
    int n1 = mid-low+1;
    int n2 = high - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[low+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid+1+i];
    }

    int i = 0;
    int j = 0;
    int k = low;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
            arr[k++] = a[i++];
        else
            arr[k++] = b[j++];
    }
    while(i<n1)
    {
        arr[k++] = a[i++];
    }
    while(j<n2)
    {
        arr[k++] = b[j++];
    }
    
}
void MergeSort(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
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
    MergeSort(arr,0,arr.size());

    for (int i = 0; i < n;  i++)
    {
        cout<<arr[i]<<" ";
    }
    
   
    _getch();
    return 0;
}