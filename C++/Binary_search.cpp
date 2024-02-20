#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int  l,int  r, int key){
    int mid;

    // if(arr[mid] == key){
    //     return mid;
    // }
    // else{
    //     if()
    // }
    while(l<=r){
        mid = (l+r-1)/2;
        if(arr[mid] == key)
        return mid;
        if(arr[mid]>key)
        r=mid-1;
        else
        l=mid+1;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binary_search(arr, 0, sizeof(arr)/sizeof(int), key)+1<<endl;
}