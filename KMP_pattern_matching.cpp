#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void KMP_Failure(string &Pattern,int* f)
{
    int i = 1;
    int j = 0;
    f[0] = 0;
    while(i<Pattern.length())
    {
        if(Pattern[i]==Pattern[j])
        {
            f[i] = j+1;
            i++;
            j++;         
        }
        else if(j>0)
            {
                j = f[j-1];
            }
        else
            {
                f[i] = 0;
                i++;
            }
    }
    
}

void KMP_Match(string Text,string Pattern,int* &f)
{
    int i = 0;
    int j = 0;
    while(i<Text.length())
    {
        if(Text[i] == Pattern[j])
        {
            if(j == Pattern.length()-1)
            {
                cout<<"Pattern is at index "<< i-(Pattern.length())+1<<endl;
                return ;
            }
            i++;
            j++;
        }
        else if(j>0)
            {
                j = f[j-1];
            }
        else
            {
                i++;
            }
        

    }
    cout<<"Pattern not found"<<endl;
    return;
}
int main()
{

    string Text = "ABAAABAABABACBABCACBBBA";
    string Pattern = "AABABACBA";
    int* f;
    f = new int[Pattern.size()];
    KMP_Failure(Pattern,f);
    KMP_Match(Text,Pattern,f);
    _getch();
    return 0;
}