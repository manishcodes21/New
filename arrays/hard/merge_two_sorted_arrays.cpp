//optimal 2 
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int len=m+n;
//         int gap=len/2+len%2 ; //ceil finction
//         while(gap>0){
//             int left=0;
//             int right=left+gap;
//             while(right<len){
//                 //left in nums1 and right in nums 2
//                 if(left<m && right>=m){
//                     if(nums1[left]>nums2[right-m]){
//                         swap(nums1[left],nums2[right-m]);
//                     }
//                 }
//                 //both are in nums1
//                 else if (left<m && right<m){
//                     if(nums1[left]>nums1[right]){
//                         swap(nums1[left],nums1[right]);
//                     }
//                 }
//                 //both are in nums2
//                 else if(left>=m && right>=m){
//                     if(nums2[left-m]>nums2[right-m]){
//                         swap(nums2[left-m],nums2[right-m]);
//                     }
//                 }
//                 left++;
//                 right++;

//             }
//             if(gap==1) break;
//             else{
//                 gap=ceil(gap/2);
//             }
//         }
//         for(int i=0;i<m+n;i++){
//             if(i>=m){
//                 nums1[i]=nums2[i-m];
//             }
//         }
//     }
// };
//optimal 1 tc:O(m + nlogn+mlogm)

// #include<vector>

// void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
// 	// Write your code here.
// 	int n=a.size();
// 	int m=b.size();
// 	int j=n-1;
// 	for(int i=0;i<m;i++){
// 		if(a[j]>b[i]) {
// 			swap(a[j],b[i]);
// 			j--;

// 		}
// 		else{
// 			break;
// 		}
// 	}
// 	sort(a.begin(),a.end());
// 	sort(b.begin(),b.end());
	
	
// }