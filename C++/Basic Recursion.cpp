//Learning Basic recursion
#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int psum=sum(n-1);
    return psum+n;
}

int main()
{
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
}
