//A unique way of printing any text
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="hello world";
    int k=str.length();
    string s;
    for(int i=0;i<k;i++)
    {
        s[i]='A';
    }
    int i=0,j=0;
    
    while(s[i]!=str[i])
    {
        
        if(i==str.length())
        break;
        
        if(str[i]==' ')
        {
            s[i]=' ';
            i++;
            continue;
        }
        
        s[i]='a'+j;
        j++;
        for(int a=0;a<=i;a++)
        {
            cout<<s[a];
        }
        cout<<endl;

        if('a'+j-1==str[i])
        {
            i++;
            j=0;
        }
    }
}
