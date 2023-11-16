// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n=nums.size();
//         int l=0;
//         int h=n-1;
       
//         int ans=INT_MAX;
//         while(l<=h){
//             int m=(l+h)/2;
//             //case when both the sides or sorted that is we have corssed the pivot part 
//             if(nums[l]<nums[m] && nums[m]<nums[h]) {
//                 ans=min(ans,nums[l]);
//                 break;
//             }
//             if(nums[l]<=nums[m]){
//                 ans=min(ans,nums[l]);
//                 l=m+1;
//             }
//             else if(nums[m]<=nums[h]){
//                 ans=min(ans,nums[m]);
//                 h=m-1;
//             }

//         }
//         return ans;
//     }
// };