// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {
//         int low=0;
//         int n=nums.size();
//         int high=n-1;
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(nums[mid]==target) return true;
//             //in this case we have to shrink down the array as nums[low] ans nums[high] are not the target 
//             if(nums[low]==nums[mid] && nums[mid]==nums[high]){
//                 low++;
//                 high--;
//             }
//             //right is sorted
//             else if(nums[mid]<=nums[high]){
//                  if(target>nums[mid] && target<=nums[high]){
//                     low=mid+1;
//                 }
//                 else{
//                    high=mid-1;
//                 }
//             }
//             //left is sorted
//             else if(nums[low]<=nums[mid] ){
//                 if(target<nums[mid] && target>=nums[low]){
//                     high=mid-1;
//                 }
//                 else {
//                     low=mid+1;
//                 }
//             }
//         }

//         return false;
//     }
// };