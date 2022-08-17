#include <iostream>
#include <conio.h>
#include <vector>
#define INF 9999
#define n 5  //number of vertices
using namespace std;

bool isValidEdge(int u,int v,vector<bool> &inMST)
{
    if(u==v)
        return false;
    if(inMST[u] == false && inMST[v] == false)
        return false;
    else if(inMST[u] == true && inMST[v] == true)
        return false;
    else
        return true;

}
void PrimsMST(int cost[][n])
{
    vector<bool> inMST(n,false);
    inMST[0] = true;

    int edge_count = 0;
    int min_cost = 0;
    
    while (edge_count< n-1)
    {
    int min = INF;
    int a = -1;
    int b = -1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
               if(cost[i][j]<min)
               {
                    if(isValidEdge(i,j,inMST))
                    {
                        min = cost[i][j];
                        a= i;
                        b = j;
                        
                    } 
               }
            }
            
        }
        if(a!=-1 && b!=-1)
        {
            cout<<"Edge "<<edge_count<<": "<<a<<" - "<<b<<": "<<min<<endl;
                        edge_count++;
                        min_cost = min_cost + min;
                        inMST[a] = true;
                        inMST[b] = true;
        }
        
        
    }
    
    cout<<"Mincost of MST is : "<<min_cost<<endl;

}

int main()
{

    int cost[][n] = {{INF,2,INF,6,INF},{2,INF,3,8,5},{INF,3,INF,INF,7},{6,8,INF,INF,9},{INF,5,7,9,INF}};

    PrimsMST(cost);

    _getch();
    return 0;
}