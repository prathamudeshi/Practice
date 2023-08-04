#include<bits/stdc++.h>
using namespace std;

void allsubstr(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch=s[0];
    
    allsubtstr(ros,ans);
    allsubstr(ros,ans+ch);
}

int main()
{

}