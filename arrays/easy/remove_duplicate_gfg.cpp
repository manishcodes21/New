//https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int optimal_remove_duplicate(int arr[],int n){
        // code here
        int i=0;
        for(int j=1;j<n;j++){
            if(arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
            }
        }
        return i+1;
    }
     int brute_remove_duplicate(int arr[],int n){
        // code here
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        }
        int index=0;
        for(auto it:st){
            arr[index]=it;
            it++;
        }
    return index+1;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.optimal_remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends