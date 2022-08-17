#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

void Add_Matrices(vector<vector<int>> &matrix1,vector<vector<int>> &matrix2,vector<vector<int>> &R_matrix, int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        {
           int sum =  matrix1[i][j] + matrix2[i][j];
           R_matrix[i].push_back(sum);
        }
    }
    
}

int main()
{
    



    int r;
    int c;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"ENter number of columns: ";
    cin>>c;

    vector<vector<int>> matrix1(c*r);
    vector<vector<int>> matrix2(c*r);
    vector<vector<int>> R_matrix(c*r);

    //taking arr input

    cout<<"Enter values of matrix 1"<<endl;
    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<"mat1["<<i<<"]["<<j<<"] = ";
            int a;
            cin>>a;
            matrix1[i].push_back(a);
        }
    }
    cout<<"Enter values of matrix 2"<<endl;
    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<"mat2["<<i<<"]["<<j<<"] = ";
            int a;
            cin>>a;
            matrix2[i].push_back(a);
        }
    }
    //Addition of the two matrices
    Add_Matrices(matrix1,matrix2,R_matrix,r,c);
  
   
    //Result Matrix
    for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << R_matrix[i][j]<< " ";
        }
        cout<<endl;
    }
    _getch();
    return 0;
}