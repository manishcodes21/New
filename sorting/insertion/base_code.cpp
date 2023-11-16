#include <bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n){
     for(int j=0;j<n;j++){
        int i=j;
             while(i>0 && arr[i-1]>arr[i]){
            int temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;
            i--;
        }
        }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
}
