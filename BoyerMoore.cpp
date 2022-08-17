#include <iostream>
#include <conio.h>
#include <vector>
#include <map>
using namespace std;


void BoyerMoore(string Text,string Pattern)
{
    map<char,int> Function_last;
    for (int i = 0; i < Pattern.size(); i++)
    {
        Function_last[Pattern[i]] = i;
    }
   int m = Pattern.size();
   int n = Text.size();
   
   int i = m-1;
   int j =m-1;

    while(i<=n)
    {
        if(Pattern[j] == Text[i])
        {
            if(j==0)
            {
                cout<<"Pattern found at index "<<i<<endl;
                return;
            }
                
            else
            {
                i--;
                j--;
            }
            
        }
        else
        {
            if(Function_last.find(Text[i])!=Function_last.end())
            {
                i = i + m - min(j,1+Function_last[Text[i]]);
            }
            else
            {
                i = i + m - min(j,0);
            }
            j = m-1;
            
        }

    }
    cout<<"Pattern not found"<<endl;
    return ;
        
}
  
    

int main()
{
    string Text = "ABABBABCABDABAABB";
    string Pattern = "AAB";

    BoyerMoore(Text,Pattern);
    _getch();
    return 0;
}