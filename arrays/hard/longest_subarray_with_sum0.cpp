//tc:O(n*logn)
//sc:O(unique sums)
// #include<bits/stdc++.h>

// int getLongestZeroSumSubarrayLength(vector<int> &arr){
// 	// Write your code here.
// 	int maxi=0;
// 	int sum=0;
// 	int n=arr.size();
// 	map<int,int>mpp;
// 	for(int i=0;i<n;i++){
// 		sum+=arr[i];
// 		if(sum==0) maxi=max(maxi,i+1);
// 		else{
// 			if(mpp.find(sum)==mpp.end()){
// 				mpp[sum]=i;
// 			}
// 			else{
// 				maxi=max(maxi,i-mpp[sum]);
// 			}
// 		}
// 	}
// 	return maxi;
// }