#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

vector<vector<char>> ans;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}
void permute(vector<char> &a,int idx)
{
    if(idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    
}

int main()
{
    int n;cin>>n;
    vector<char> a(n);
    for(auto &i:a)
        cin>>i;
    permute(a,0);
    for(auto v: ans )
    {
        for(auto i : v)
            cout<<i<<" ";
        cout<<endl;
    }
  
    _getch();
    return 0;
}