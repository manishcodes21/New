//https://practice.geeksforgeeks.org/problems/reversal-algorithm5340/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
    void optimal_leftRotate(int arr[], int n, int d) {
        // code here
        d=d%n;
        reverse(arr,arr+d);
        reverse(arr+d,arr+n);
        reverse(arr,arr+n);
    }
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   //brute force method
	   k=k%n;
	   vector<int>temp;
	   for(int i=0;i<k;i++){
	       temp.push_back(arr[i]);
	   }
	   for(int i=k;i<n;i++){
	       arr[i-k]=arr[i];
	   }
	   for(int i=n-k;i<n;i++){
	       arr[i]=temp[i-(n-k)];
	   }
	   
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends