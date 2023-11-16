// int count(vector<int>& arr, int n, int x) {
// 	// Write Your Code Here
// 	int ans=0;
// 	int low=0;
// 	int high=n-1;
// 	while(low<=high){
// 		int mid=(low+high)/2;
// 		if(arr[mid]<x){
// 			low=mid+1;
// 		}
// 		else if(arr[mid]>x){
// 			high=mid-1;
// 		}
// 		else{
// 			ans++;

// 			int l=mid-1;
// 			while(l>=0 && arr[l]==x){
// 				ans++;
// 				l--;
// 			}
// 			int r=mid+1;
// 			while(r<n && arr[r]==x){
// 				ans++;
// 				r++;
// 			}
			
// 			return ans;	
// 		}
// 	}


// 	return ans;
// }
