



//own solution
// class Solution {
// public:

//     int searchInsert(vector<int>& nums, int target) {
//         int n=nums.size();
//         int l=0;
//         int h=n-1;
//         int m;
//         int ans;
//         while(l<=h){
//              m=(l+h)/2;
//             if(nums[m]<target){
//                 l=m+1;
//             }
//             else if(nums[m]>target){
//                 h=m-1;
//             }
//             else{
//                 ans=m;
//                 break;
//             }
            
//         }
//         if(nums[m]<target) ans=m+1;
        
//         else ans=m;
//         return ans ;
//     }
// };