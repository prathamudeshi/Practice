#include<bits/stdc++.h>
using namespace std;

bool issafe(int** arr, int x, int y, int n)
{
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    return false;
}

bool ratinmaze(int ** arr,int x, int y, int n, int ** ans )
{
    if(issafe(arr,x,y,n))
    {
        ans[x][y]=1;
        if(ratinmaze(arr,x+1,y,n,ans))
        {
            return true;
        }
        if(ratinmaze(arr,x,y+1,n,ans))
        {
            return true;
        }
    }
}

int main()
{

    return 0;
}