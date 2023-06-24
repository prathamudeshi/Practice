#include<bits/stdc++.h>
using namespace std;

bool sort(int arr[],int n)
{
    if(n==1)
    return 1;
    bool prevarr=sort(arr+1,n-1);
    return(arr[0]<arr[1] && prevarr);
}

int main()
{
    int arr[]={1,2,3,1,5};
    cout<<sort(arr,5);
}