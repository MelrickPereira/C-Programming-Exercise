#include <iostream>
#include <conio.h>

using namespace std;

void BruteForce(string Text,string Pattern)
{
    for (int i = 0; i < Text.length() - Pattern.length(); i++)
    {
        int j;
        for ( j = 0; j < Pattern.length(); j++)
            if(Text[i+j] != Pattern[j]) 
                break;
        if(j == Pattern.length())
        {
            cout<<"Pattern Present at "<< i<<endl;
        }
            
        
        
    }
    
}
int main()
{
    string Text = "AABABBABCABDABAABB";
    string Pattern = "AAB";

    BruteForce(Text,Pattern);
    _getch();
    return 0;
}