#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=high;
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]>=arr[pivot] && i<=high-1) i++;
        while(arr[j]<arr[pivot] && j>=low+1) j--;
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[pivot]);
    return j;
}

void quicksort(int arr[],int low,int high){
    if(low<high){
        int partition_ind=partition(arr,low,high);
        quicksort(arr,low,partition_ind-1);
        quicksort(arr,partition_ind+1,high);
    }

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
