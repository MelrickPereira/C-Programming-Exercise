#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;


int knapsack(int W, int n,vector<int> values,vector<int> weights,vector<int> &x)
{
    
    if(n==0 || W==0) 
    {
        return 0;
    }
    if(weights[n-1]>W)
    {
        x[n-1] = 0;
        return knapsack(W , n-1,values,weights,x);     
    }
    else
    {
        if(knapsack(W,n-1,values,weights,x)>knapsack(W-weights[n-1],n-1,values,weights,x))
        {
            
            return knapsack(W,n-1,values,weights,x);
        }
        else
        {
            x[n-1] = 1;
            return values[n-1] + knapsack(W-weights[n-1],n-1,values,weights,x);
        }

            

    }
        
    
   

}
int main()
{
    
    cout<<"Enter number of objects: ";
    int n;cin>>n;
    cout<<"Enter the knapsack Size: ";
    int W;cin>>W;
    vector<int> values(n);
    vector<int> weights(n);
    vector<int> solution_vector(n); 
    cout<<"ENter object values: ";
    for(auto &x: values)
    {
        cin>>x;
     
    }
    cout<<"ENter object weights: ";
    for(auto &x: weights)
    {
        cin>>x;
       
    }

    cout<<knapsack(W,n,values,weights,solution_vector)<<endl;
    cout<<"The solution vector is : [ ";
    for (int i = 0; i < n; i++)
    {
        cout<<solution_vector[i]<<"  ";
    }
    
    cout<<"]";
    _getch();
    return 0;
}