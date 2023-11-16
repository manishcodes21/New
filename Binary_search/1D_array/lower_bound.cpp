// int lowerBound(vector<int> arr, int n, int x) {
// 	// Write your code here
// 	int low=0;
// 	int high=n-1;
// 	int ans=n;  // trick..if lower bound doesnt exist ans is n
// 	while(low<=high){
// 	int mid=(low+high)/2;
// 		if(x<=arr[mid]){
// 			ans=mid;
// 			high=mid-1;
// 		}
// 		else{
// 			low=mid+1;
// 		}
// 	}

// 	return ans;
	
// }


//using STL
// int lowerBound(vector<int> arr, int n, int x) {
// 	// Write your code here
// 	if(x>arr[n-1]){
// 		return n;
// 	}
// 	//returns index of x if exist or else returns index of the smallest greatest number 
// 	int lb=lower_bound(arr.begin(),arr.end(),x)-arr.begin();//doing -arr.begin() in order to get the index
// 	 return lb;
	
// }
