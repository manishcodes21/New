#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    int k=0;
    int z=n-1;
    while(z--){
        for(int i=0;i<=n-2-k;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }

        }
        k++;
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
    bubblesort(arr,n);
}
