// class Solution {
// public:
//     vector<int> bsearch(vector<int>& nums, int target,int l,int h,int n){
//          vector<int> ans(2,-1);
//          while(l<=h){

//          int m=(l+h)/2;
//             if(nums[m]<target){

//                 l=m+1;
//             }
//             else if(nums[m]>target){
//                 h=m-1;

//             }
//             else{
//                 ans[0]=ans[1]=m;

//                 //for lower range value
//                 int left=m-1;
//                 while(left>=0 && nums[left]==target){
//                     ans[0]=left;
//                     left--;
//                 }
//                 //for higher range value
//                 int right=m+1;
//                 while(right<=n-1 && nums[right]==target){
//                     ans[1]=right;
//                     right++;
//                 }
//             return ans;
                
//             }
            
//          }
//             return ans;
//     }
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int>ans(2,-1);
//         int n=nums.size();
//         return bsearch(nums,target,0,n-1,n);
//     }
// };