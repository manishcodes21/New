//optimal  tc:O(n+nlogn)
// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         int n=intervals.size();
//          vector<vector<int>>ans;
//          sort(intervals.begin(),intervals.end());
//         for(int i=0;i<n;i++){
//             if(ans.empty() || ans.back()[1]<intervals[i][0]){
//                 ans.push_back(intervals[i]);
//             }
//             else{
//                 ans.back()[1]=max(ans.back()[1],intervals[i][1]);
//             }
//         }

//         return ans;
//     }
// };

// brute tc:O(2*n)
// sc:O(n) 
// #include<vector>

// vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
// 	// Write your code here.
// 	int n=arr.size();
// 	vector<vector<int>> ans;
// 	for(int i=0;i<n;i++){
// 		int start=arr[i][0];
// 		int end=arr[i][1];
// 		if(!ans.empty() && end<=ans.back()[1]) continue;
// 		for(int j=i+1;j<n;j++){
// 			if(arr[j][0]<=end){
// 				end=max(end,arr[j][1]);
// 			}
// 			else{

// 			break;
// 			}
// 		}
// 		ans.push_back({start,end});
// 	}

// 	return ans;
// }