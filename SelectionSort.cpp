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
void SelectionSort(vector<int> &arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for (int j = i+1; j <n ; j++)
        {
            if(arr[j]<arr[i])
                swap(arr[i],arr[j]);
        }
        
    }
}

int main()
{
    vector<int> arr;
    cout<<"Enter the number of elemenets: ";
    int n;
    cin>>n;
    //taking arr input
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    
    //Selection SOrt

    SelectionSort(arr,n);

    //printing sorted array
    cout << "Sorted \n";
    for (auto x : arr)
        cout << x << " ";
    _getch();
    return 0;
}