#include<bits/stdc++.h>
using namespace std;

string remx(string s)
{
    if(s.length()==0)
        return "";
    
    char ch=s[0];
    string ans=remx(s.substr(1));

    if(ch=='x')
        return ans+ch;
    else
        return ch+ans;
}

int main()
{
    string s="axbxcxdxex";
    cout<<remx(s)<<endl;


    return 0;
}