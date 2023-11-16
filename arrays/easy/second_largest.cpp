//https://practice.geeksforgeeks.org/problems/second-largest3735/1
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
    int optimal_print2largest(int arr[], int n) {
	    // code here
	    int max=arr[0];
	    int max2=-1;
	    for(int i=1;i<n;i++){
	        if(arr[i]>max){
	            max2=max;
	            max=arr[i];
	        }
	        else if(arr[i]<max && arr[i]>max2) max2=arr[i];
	    }
	    
	    return max2;
	}
	int print2largest(int arr[], int n) {
	    // code here
	    int max=0;
        for(int i=0;i<n;i++){
            if(max<arr[i]) max=arr[i];
        }
        int max2=0;
        int f=0;
        for(int i=0;i<n;i++){
            if(max2<arr[i] && arr[i]<max){
                 max2=arr[i];
                 f=1;
            }
        }
        if(f==1)        return max2;
        else return -1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends