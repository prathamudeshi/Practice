//A different approach to find GCD
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    int n1=max(a,b),n2=min(a,b),c;
    while(n2!=0)
    {
        c=n1%n2;
        n1=n2;
        n2=c;
    }
    return n1;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
