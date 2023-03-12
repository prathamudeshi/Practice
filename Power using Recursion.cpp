//Finding power of any number using recursion 
#include<bits/stdc++.h>
using namespace std;

int power(int n,int p)
{
    if(p==1)
    return n;

    int prevpow=power(n,p-1);
    return prevpow*n;
}

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;
}
