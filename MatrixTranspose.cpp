#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

void MatrixTranspose(vector<vector<int>> &matrix,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
        
    }
    
}
int main()
{
    
    int n;
    cout<<"Enter size of square matrix: ";
    cin>>n;
    
    vector<vector<int>> matrix(n*n);
    

    cout<<"Enter values of matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"mat["<<i<<"]["<<j<<"] = ";
            int a;
            cin>>a;
            matrix[i].push_back(a);
        }
    }
    cout<<"Original Matrix: "<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j]<< "  ";
        }
        cout<<endl;
    }
    MatrixTranspose(matrix,n);
    cout<<"Transposerd Matrix: "<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j]<< "  ";
        }
        cout<<endl;
    }
    _getch();
    return 0;
}