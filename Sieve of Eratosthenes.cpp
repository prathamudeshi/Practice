//A different approach to find prime numbers
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        arr1[i]=i;
        arr2[i]=1;
    }
    arr2[1]=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[j]%i==0 && i!=j)
            arr2[j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr2[i])
        cout<<i<<" ";
    }
}
