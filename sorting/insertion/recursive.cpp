#include <bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int low,int high){
    if(low>high){
        return;
    }
    int i=low;
    while(i>0 && arr[i-1]>arr[i]){
        swap(arr[i-1],arr[i]);
        i--;
    }
    insertionsort(arr,low+1,high);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,1,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
