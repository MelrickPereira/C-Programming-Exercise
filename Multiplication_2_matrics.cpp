#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

void Mul_Matrices(vector<vector<int>> &matrix1,vector<vector<int>> &matrix2,vector<vector<int>> &R_matrix, int r1,int c1,int r2,int c2)
{
    int sum;
    for(int i=0;i<r1;i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                 R_matrix[i][j] =  R_matrix[i][j] + matrix1[i][k] * matrix2[k][j];
                
            }
           
        }
    }
    
}

int main()
{
    



    int r1;
    int c1;
    cout<<"Enter number of rows of matrix1: ";
    cin>>r1;
    cout<<"ENter number of columns of matrix1: ";
    cin>>c1;

    int r2;
    int c2;
    cout<<"Enter number of rows of matrix2: ";
    cin>>r2;
    cout<<"ENter number of columns of matrix2: ";
    cin>>c2;

    if(c1==r2)
    {
        vector<vector<int>> matrix1(r1,vector<int> (c1,0));
        vector<vector<int>> matrix2(r2,vector<int> (c2,0));
        vector<vector<int>> R_matrix(r1,vector<int> (c2,0));

        //taking arr input

        cout<<"Enter values of matrix 1"<<endl;
        for(int i=0;i<r1;i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout<<"mat1["<<i<<"]["<<j<<"] = ";
                cin>>matrix1[i][j];
               
            }
        }
        cout<<"Enter values of matrix 2"<<endl;
        for(int i=0;i<r2;i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout<<"mat2["<<i<<"]["<<j<<"] = ";
                cin>>matrix2[i][j];
            }
        }
        //Mutliplication of the two matrices
        Mul_Matrices(matrix1,matrix2,R_matrix,r1,c1,r2,c2);
    
    
        //Result Matrix
        for(int i=0;i<r1;i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << R_matrix[i][j]<< " ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Cannot multiply the two matrices"<<endl;
    }
   
    _getch();
    return 0;
}