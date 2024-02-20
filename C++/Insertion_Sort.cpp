#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b;i++)

void insertion_sort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    rep(i, 0, n)
    cin>>arr[i];
    insertion_sort(arr, n);
    rep(i, 0, n)
    cout<<arr[i]<<" ";
    
}