// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int n=nums.size();
//         int l=0;
//         int h=n-1;
//         while(l<=h){
//             int m=(l+h)/2;
//              if ((m == 0 || nums[m] != nums[m - 1]) && (m == n - 1 || nums[m] != nums[m + 1])) {
//                 return nums[m];
//             }
//             if(nums[m]==nums[m-1]){
//                 int x=m-l+1;
//                 if(x%2!=0){

//                 h=m;
//                 }
//                 else{
//                     l=m+1;
//                 }
//             }
//             else if(nums[m]==nums[m+1]){
//                 int x=h-m+1;
//                 if(x%2!=0){

//                 l=m;
//                 }
//                 else{
//                     h=m-1;
//                 }
//             }

//             }

        
//         return -1;
// }
// };