#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;


//----------------------------------------------------------------------------
//Using Iteration
//---------------------------------------------------------------------------
// int BinarySearch(vector<int> arr,int low,int high,int element)
// {

//     while(low<=high)
//     {
//         int mid = ((low+high)/2);

//         if(element == arr[mid])
//             return mid;
//         else if(element < arr[mid])
//             high = mid-1;
//         else
//             low = mid+1;
//     }
//     return -1;
// }


//--------------------------------------------------------------------
//Using recursion-
//--------------------------------------------------------------------
int BinarySearch(vector<int> arr,int low, int high,int element)
{
    int mid;
    if(low==high)
    {
        if(element == arr[low])
            return low;
        else    
            return -1;
    }
    else
    {
        mid = (low+high)/2;
        if(element == arr[mid])
            return mid;
        else if(element<arr[mid])
            return BinarySearch(arr,low,mid-1,element);
        else if(element>arr[mid])
            return BinarySearch(arr,mid+1,high,element);
    }
}



int main()
{
    vector<int> arr = {1,4,5,7,9,14,17,23,24,45,46};
    int index;
    cout<<"Enter the element to be searched in the given array: "<< endl;
    int element;cin>>element;
    index = BinarySearch(arr,0,arr.size(),element);
   
    if(index == -1)
    {
        cout<<"Element not present"<<endl;
    }
    else
    {
        cout<<"element is at index: "<<index<<endl;
    }
    _getch();
    return 0;
}