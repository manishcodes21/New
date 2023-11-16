// pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
// 	// Write your code here.
// 	sort(arr,arr+n);
// 	int low=0;
// 	int high=n-1;
// 	pair<int,int>ans({-1,-1});
//floor value
// 	while(low<=high){
// 		int mid=(low+high)/2;
// 		if(arr[mid]<=x){
// 			low=mid+1;
// 			ans.first=arr[mid];
// 		}
// 		else{
// 			high=mid-1;
// 		}
// 	}
//ceil value
// 	int l=0,h=n-1;
// 	while(l<=h){
// 		int m=(l+h)/2;
// 		if(arr[m]<x){
// 			l=m+1;
// 		}
// 		else{
// 			ans.second=arr[m];
// 			h=m-1;
			
// 		}
// 	}

// 	return ans;
// }
